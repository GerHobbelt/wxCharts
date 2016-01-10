/*
	Copyright (c) 2016 Xavier Leclercq

	Permission is hereby granted, free of charge, to any person obtaining a
	copy of this software and associated documentation files (the "Software"),
	to deal in the Software without restriction, including without limitation
	the rights to use, copy, modify, merge, publish, distribute, sublicense,
	and/or sell copies of the Software, and to permit persons to whom the
	Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
	THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
	IN THE SOFTWARE.
*/

#include "wxcharttooltip.h"
#include "wxchartutilities.h"

wxChartTooltip::wxChartTooltip(const wxPoint2DDouble &position,
							   const wxString &text)
	: m_position(position), m_template(new wxChartTooltipTemplateStatic(text))
{
}

void wxChartTooltip::Draw(wxGraphicsContext &gc)
{
	wxString text = m_template->GetTooltipText();

	wxFont font(wxSize(0, m_options.GetFontSize()),
		m_options.GetFontFamily(), m_options.GetFontStyle(), wxFONTWEIGHT_NORMAL);
	wxDouble tooltipWidth;
	wxDouble tooltipHeight;
	wxChartUtilities::GetTextSize(gc, font, text, tooltipWidth, tooltipHeight);
	tooltipWidth += 2 * m_options.GetHorizontalPadding();
	tooltipHeight += 2 * m_options.GetVerticalPadding();


	wxDouble tooltipX = m_position.m_x - (tooltipWidth / 2);
	wxDouble tooltipY = m_position.m_y - tooltipHeight;

	wxGraphicsPath path = gc.CreatePath();
	
	path.AddRoundedRectangle(tooltipX, tooltipY, tooltipWidth, tooltipHeight, m_options.GetCornerRadius());

	wxBrush brush(m_options.GetBackgroundColor());
	gc.SetBrush(brush);
	gc.FillPath(path);

	gc.SetFont(font, m_options.GetFontColor());
	gc.DrawText(text, tooltipX + m_options.GetHorizontalPadding(), tooltipY + m_options.GetVerticalPadding());
}