/*
    Copyright (c) 2017-2024 Xavier Leclercq

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

/// @file

#ifndef _WX_CHARTS_WXCOMBINATIONCHARTCTRL_H_
#define _WX_CHARTS_WXCOMBINATIONCHARTCTRL_H_

#include "wxchart_dlimpexp.h"

#include "wxchartctrl.h"
#include "wxcombinationchart.h"

/// \ingroup chartclasses
class WXDLLIMPEXP_ISHIKO_CHARTS wxCombinationChartCtrl : public wxChartCtrl
{
public:
    wxCombinationChartCtrl(wxWindow *parent, wxWindowID id, const wxPoint &pos = wxDefaultPosition,
        const wxSize &size = wxDefaultSize, long style = 0);

    void AddColumnChart(const wxChartsCategoricalData &data);

private:
    virtual wxCombinationChart& GetChart();

private:
    wxCombinationChart m_combinationChart;
};

#endif
