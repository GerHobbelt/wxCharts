/*
    Copyright (c) 2016-2024 Xavier Leclercq

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

#ifndef _WX_CHARTS_WXCHARTSLEGENDOPTIONS_H_
#define _WX_CHARTS_WXCHARTSLEGENDOPTIONS_H_

#include "wxchart_dlimpexp.h"

#include "wxchartslegendlineoptions.h"

/// Options for the wxChartsLegendCtrl control.
class WXDLLIMPEXP_ISHIKO_CHARTS wxChartsLegendOptions
{
public:
    /// Constructs a wxChartsLegendOptions instance.
    wxChartsLegendOptions();

    /// Gets the orientation of the legend.
    /// @retval wxHORIZONTAL The legend items
    /// are organized horizontally.
    /// @retval wxVERTICAL The legend items
    /// are organized vertically.
    wxOrientation GetOrientation() const;

    const wxChartsLegendLineOptions& GetLegendLineOptions() const;

private:
    wxOrientation m_orientation;
    wxChartsLegendLineOptions m_legendLineOptions;
};

#endif
