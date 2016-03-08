// WkHtmlToXDotNet.h

#pragma once

#include "wkhtmltox\pdf.h"
#include "wkhtmltox\image.h"

namespace WkHtmlToXDotNet {

	public ref class HtmlToXConverter
	{
	private:
		static HtmlToXConverter();

	public:
		static array<System::Byte>^ ConvertToPdf(System::String^ html);

		static array<System::Byte>^ ConvertToImage(System::String^ html, System::String^ format, int width, int height);
	};
}
