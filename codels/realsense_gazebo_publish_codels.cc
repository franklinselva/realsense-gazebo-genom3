
#include "acrealsense_gazebo.h"

#include "realsense_gazebo_c_types.h"


/* --- Task publish ----------------------------------------------------- */


/** Codel camera_start of task publish.
 *
 * Triggered by realsense_gazebo_start.
 * Yields to realsense_gazebo_pub, realsense_gazebo_pause_start.
 * Throws realsense_gazebo_e_OUT_OF_MEM,
 *        realsense_gazebo_e_BAD_GAZEBO_CONFIG,
 *        realsense_gazebo_e_PCL_ERROR.
 */
genom_event
camera_start(realsense_gazebo_CameraInfo *info,
             const realsense_gazebo_Frame *Frame,
             const realsense_gazebo_Extrinsics *Extrinsics,
             const realsense_gazebo_Intrinsics *Intrinsics, bool debug,
             const genom_context self)
{
  /* skeleton sample: insert your code */
  /* skeleton sample */ return realsense_gazebo_pub;
}


/** Codel camera_publish of task publish.
 *
 * Triggered by realsense_gazebo_pub.
 * Yields to realsense_gazebo_pub, realsense_gazebo_pause_pub,
 *           realsense_gazebo_ether.
 * Throws realsense_gazebo_e_OUT_OF_MEM,
 *        realsense_gazebo_e_BAD_GAZEBO_CONFIG,
 *        realsense_gazebo_e_PCL_ERROR.
 */
genom_event
camera_publish(const realsense_gazebo_CameraInfo *info,
               const realsense_gazebo_Frame *Frame,
               const realsense_gazebo_Extrinsics *Extrinsics,
               const realsense_gazebo_Intrinsics *Intrinsics,
               bool show_frames, bool debug, const genom_context self)
{
  /* skeleton sample: insert your code */
  /* skeleton sample */ return realsense_gazebo_pub;
}


/* --- Activity start_camera -------------------------------------------- */

/** Codel StartCamera of activity start_camera.
 *
 * Triggered by realsense_gazebo_start.
 * Yields to realsense_gazebo_ether.
 * Throws realsense_gazebo_e_OUT_OF_MEM,
 *        realsense_gazebo_e_BAD_GAZEBO_CONFIG,
 *        realsense_gazebo_e_PCL_ERROR, realsense_gazebo_e_BAD_CONFIG.
 */
genom_event
StartCamera(bool *started, const genom_context self)
{
  /* skeleton sample: insert your code */
  /* skeleton sample */ return realsense_gazebo_ether;
}
