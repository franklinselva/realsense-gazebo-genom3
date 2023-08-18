
#include "acrealsense_gazebo.h"

#include "realsense_gazebo_c_types.h"


/* --- Activity start_camera -------------------------------------------- */

/** Validation codel check_connection of activity start_camera.
 *
 * Returns genom_ok.
 * Throws realsense_gazebo_e_OUT_OF_MEM,
 * realsense_gazebo_e_BAD_GAZEBO_CONFIG, realsense_gazebo_e_PCL_ERROR,
 * realsense_gazebo_e_BAD_CONFIG.
 */
genom_event
check_connection(bool started, const genom_context self)
{
  /* skeleton sample: insert your code */
  /* skeleton sample */ return genom_ok;
}


/* --- Function set_resolution ------------------------------------------ */

/** Codel SetResolution of function set_resolution.
 *
 * Returns genom_ok.
 */
genom_event
SetResolution(int16_t width, int16_t height,
              realsense_gazebo_CameraInfo_size_s *size,
              const genom_context self)
{
  /* skeleton sample: insert your code */
  /* skeleton sample */ return genom_ok;
}


/* --- Function set_compression ----------------------------------------- */

/** Codel SetCompression of function set_compression.
 *
 * Returns genom_ok.
 */
genom_event
SetCompression(int16_t compression_percent, int16_t *compression_rate,
               const genom_context self)
{
  /* skeleton sample: insert your code */
  /* skeleton sample */ return genom_ok;
}


/* --- Function stop_camera --------------------------------------------- */

/** Codel StopCamera of function stop_camera.
 *
 * Returns genom_ok.
 * Throws realsense_gazebo_e_BAD_CONFIG.
 */
genom_event
StopCamera(bool *started, const genom_context self)
{
  /* skeleton sample: insert your code */
  /* skeleton sample */ return genom_ok;
}
