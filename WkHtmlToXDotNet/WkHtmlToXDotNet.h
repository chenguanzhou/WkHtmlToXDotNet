// WkHtmlToXDotNet.h

#pragma once

#include <stdbool.h>
#include <stdio.h>
#include "wkhtmltox\pdf.h"
#include "wkhtmltox\image.h"

namespace WkHtmlToXDotNet {

	public ref class HtmlToXConverter
	{
	private:
		static HtmlToXConverter();

	public:
		static array<System::Byte>^ ConvertToPdf(System::String^ html);

		enum class ImageFormat
		{
			JPEG,
			PNG,
			BMP,
			SVG
		};
		static array<System::Byte>^ ConvertToImage(System::String^ html, ImageFormat format, int width, int height);
	};
}
