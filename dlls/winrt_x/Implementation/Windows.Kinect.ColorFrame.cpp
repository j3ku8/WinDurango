#include "pch.h"
#include "Windows.Kinect.ColorFrame.h"
#include "Windows.Kinect.ColorFrame.g.cpp"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
//static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::Windows::Kinect::implementation
{
    void ColorFrame::Close()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorImageFormat ColorFrame::RawColorImageFormat()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription ColorFrame::FrameDescription()
    {
        throw hresult_not_implemented();
    }
    void ColorFrame::CopyRawFrameDataToArray(array_view<uint8_t> frameData)
    {
        throw hresult_not_implemented();
    }
    void ColorFrame::CopyRawFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer ColorFrame::LockRawImageBuffer()
    {
        throw hresult_not_implemented();
    }
    void ColorFrame::CopyConvertedFrameDataToArray(array_view<uint8_t> frameData, winrt::Windows::Kinect::ColorImageFormat const& colorFormat)
    {
        throw hresult_not_implemented();
    }
    void ColorFrame::CopyConvertedFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Kinect::ColorImageFormat const& colorFormat)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription ColorFrame::CreateFrameDescription(winrt::Windows::Kinect::ColorImageFormat const& format)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan ColorFrame::RelativeTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrameSource ColorFrame::ColorFrameSource()
    {
        throw hresult_not_implemented();
    }
}
