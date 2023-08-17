#include "algorithms.h"


//===============================================================================
// compute_gradient()
//-------------------------------------------------------------------------------
// TODO: Calculate the 1st Sobel derivative once in x and once in y direction
//       and combine these two.
//
// parameters:
//  - input_image: the image for the gradient calculation
//  - output_image: output matrix for the gradient image
// return: void
//===============================================================================
void algorithms::compute_gradient(const cv::Mat &input_image,
                                  cv::Mat &output_image)
{
}

//===============================================================================
// compute_binary()
//-------------------------------------------------------------------------------
// TODO: 1) Normalize every gradient image and convert the results to CV_8UC1.
//       2) Threshold the retrieved (normalized) gradient image using the
//          parameter "edge_threshold".
//
// parameters:
//  - input_image: the image for the binary image calculation
//  - edge_threshold: intensities above this value are edges
//  - output_image: output matrix for the binary image
// return: void
//===============================================================================
void algorithms::compute_binary(const cv::Mat &input_image,
                                const int edge_threshold, cv::Mat &output_image)
{
}

//===============================================================================
// edge_detection()
//-------------------------------------------------------------------------------
// TODO: 1) Use compute_gradient for the gradient calculation of each channel
//       2) Use compute_binary for the binary image calculation of each channel
//       3) Save the results in the img_edge_BGR.
//       Note: Each channel has a different image size.
//
// parameters:
//  - images_BGR: vector of input images in order blue, green, red
//  - edge_threshold: intensities above this value are edges
//  - img_edges_BGR: vector for output images (storage order: blue, green, red)
//                  (vector has already the proper size of 3 matrices)
// return: void
//===============================================================================
void algorithms::edge_detection(const std::vector<cv::Mat> &images_BGR,
                                const int edge_threshold,
                                std::vector<cv::Mat> &img_edges_BGR)
{
}

//===============================================================================
// translate_img()
//-------------------------------------------------------------------------------
// TODO: 1) Translate the input image by the given offsets.
//       2) This leads to pixels which are not in the image range, set them to 0.
//       Note: A positive offset should lead to a shift to the right/bottom.
//
// parameters:
//  - img: the image to be translated
//  - c_offset: the offset for the columns
//  - r_offset: the offset for the rows
//  - output_image: Return the translated image here.
// return: void
//===============================================================================
void algorithms::translate_img(const cv::Mat &img, const int c_offset,
                               const int r_offset, cv::Mat &output_image)
{
}

//===============================================================================
// edge_matching()
//-------------------------------------------------------------------------------
// TODO: 1) Determine the best matching offset for the channels G and B. To
//          accomplish this the images are transformed (shifted in the x and
//          y direction) and a score for every possible transformation is
//          calculated by checking how many edge pixels in the reference channel
//          (R) lie on edge pixels in the transformed channels (G, B).
//       2) After calculating the best offset, transform the channels according
//          to this offset and save them to vector aligned_images_BG.
//       Note: The expected output images are of the same size as their
//             untransformed original images.
//
// parameters:
//  - input_images_BGR: vector of input images in order blue, green, red
//  - img_edges_BGR: vector of edge images in order blue, green, red
//  - match_window_size: size of pixel neighborhood in which edges should be
//                       searched
//  - aligned_images_BG: output vector for aligned channel images
//                       (storage order: blue, green)
//                       (vector has already the proper size of 2 matrices)
//  - best_offsets_BG: output vector for the best offsets
//                     (storage order: blue, green)
//                     (vector has already the proper size of 2 points)
// return: void
//===============================================================================
void algorithms::edge_matching(const std::vector<cv::Mat> &input_images_BGR,
                               const std::vector<cv::Mat> &img_edges_BGR,
                               const int match_window_size,
                               std::vector<cv::Mat> &aligned_images_BG,
                               std::vector<cv::Point2i> &best_offsets_BG)
{
}

//===============================================================================
// combine_images()
//-------------------------------------------------------------------------------
// TODO: Combine the three image channels into one single image. Mind the pixel
//       format!
//       Note: The expected image has the same dimensions as the reference
//             channel (R).
//
// parameters:
//  - image_B: blue input channel
//  - image_G: green input channel
//  - image_R: red input channel
//  - output: output matrix for combined image
//            (matrix has the size of the red channel)
// return: void
//===============================================================================
void algorithms::combine_images(const cv::Mat &image_B, const cv::Mat &image_G,
                                const cv::Mat &image_R, cv::Mat &output)
{
}

//===============================================================================
// crop_image()
//-------------------------------------------------------------------------------
// TODO: Crop the above generated image s.t. only pixels defined in every
//       channel remain in the resulting cropped output image.
//
// parameters:
//  - input: the uncropped combined input image
//  - image_B: blue input channel
//  - image_G: green input channel
//  - image_R: red input channel
//  - offset_B: the best offset for the blue channel
//  - offset_G: the best offset for the green channel
//  - out_cropped: output matrix for the cropped image
// return: void
//===============================================================================
void algorithms::crop_image(const cv::Mat &input, const cv::Mat &image_B,
                            const cv::Mat &image_G, const cv::Mat &image_R,
                            const cv::Point2i &offset_B,
                            const cv::Point2i &offset_G, cv::Mat &out_cropped)
{
}

//===============================================================================
// bonus()
//-------------------------------------------------------------------------------
// TODO: 1) Blur the image.
//       2) Apply a cartoon filter by discretize the HSV color space using the LUT.
//       3) Add the edges from the original image. NOTE: For the edge
//       detection, you should use the functions from the main task.
//
// parameters:
//  - image: the image to be cartoonized
//  - edge_threshold: intensities above this value are edges
//  - lut: lookup table for discretization
//  - output: output matrix for the final image
// return: void
//===============================================================================
void algorithms::bonus(const cv::Mat &image, const int &edge_threshold,
                       const int (&lut)[256], cv::Mat &output)
{
}
