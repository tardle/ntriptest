# Set MAV_FRAME for setpoints

# XXX DEPRECATED

# [[[cog:
# import mavros_cog
# mavros_cog.idl_decl_enum('MAV_FRAME', 'FRAME_')
# ]]]
# MAV_FRAME
uint8 FRAME_GLOBAL = 0                   # Global (WGS84) coordinate frame + altitude relative to mean sea level (MSL).
uint8 FRAME_LOCAL_NED = 1                # NED local tangent frame (x: North, y: East, z: Down) with origin fixed relative to earth.
uint8 FRAME_MISSION = 2                  # NOT a coordinate frame, indicates a mission command.
uint8 FRAME_GLOBAL_RELATIVE_ALT = 3      # Global (WGS84) coordinate frame + altitude relative to the home position.
uint8 FRAME_LOCAL_ENU = 4                # ENU local tangent frame (x: East, y: North, z: Up) with origin fixed relative to earth.
uint8 FRAME_GLOBAL_INT = 5               # Global (WGS84) coordinate frame (scaled) + altitude relative to mean sea level (MSL).
uint8 FRAME_GLOBAL_RELATIVE_ALT_INT = 6  # Global (WGS84) coordinate frame (scaled) + altitude relative to the home position.
uint8 FRAME_LOCAL_OFFSET_NED = 7         # NED local tangent frame (x: North, y: East, z: Down) with origin that travels with the vehicle.
uint8 FRAME_BODY_NED = 8                 # Same as MAV_FRAME_LOCAL_NED when used to represent position values. Same as MAV_FRAME_BODY_FRD when used with velocity/acceleration values.
uint8 FRAME_BODY_OFFSET_NED = 9          # This is the same as MAV_FRAME_BODY_FRD.
uint8 FRAME_GLOBAL_TERRAIN_ALT = 10      # Global (WGS84) coordinate frame with AGL altitude (altitude at ground level).
uint8 FRAME_GLOBAL_TERRAIN_ALT_INT = 11  # Global (WGS84) coordinate frame (scaled) with AGL altitude (altitude at ground level).
uint8 FRAME_BODY_FRD = 12                # FRD local frame aligned to the vehicle's attitude (x: Forward, y: Right, z: Down) with an origin that travels with vehicle.
uint8 FRAME_RESERVED_13 = 13             # MAV_FRAME_BODY_FLU - Body fixed frame of reference, Z-up (x: Forward, y: Left, z: Up).
uint8 FRAME_RESERVED_14 = 14             # MAV_FRAME_MOCAP_NED - Odometry local coordinate frame of data given by a motion capture system, Z-down (x: North, y: East, z: Down).
uint8 FRAME_RESERVED_15 = 15             # MAV_FRAME_MOCAP_ENU - Odometry local coordinate frame of data given by a motion capture system, Z-up (x: East, y: North, z: Up).
uint8 FRAME_RESERVED_16 = 16             # MAV_FRAME_VISION_NED - Odometry local coordinate frame of data given by a vision estimation system, Z-down (x: North, y: East, z: Down).
uint8 FRAME_RESERVED_17 = 17             # MAV_FRAME_VISION_ENU - Odometry local coordinate frame of data given by a vision estimation system, Z-up (x: East, y: North, z: Up).
uint8 FRAME_RESERVED_18 = 18             # MAV_FRAME_ESTIM_NED - Odometry local coordinate frame of data given by an estimator running onboard the vehicle, Z-down (x: North, y: East, z: Down).
uint8 FRAME_RESERVED_19 = 19             # MAV_FRAME_ESTIM_ENU - Odometry local coordinate frame of data given by an estimator running onboard the vehicle, Z-up (x: East, y: North, z: Up).
uint8 FRAME_LOCAL_FRD = 20               # FRD local tangent frame (x: Forward, y: Right, z: Down) with origin fixed relative to earth. The forward axis is aligned to the front of the vehicle in the horizontal plane.
uint8 FRAME_LOCAL_FLU = 21               # FLU local tangent frame (x: Forward, y: Left, z: Up) with origin fixed relative to earth. The forward axis is aligned to the front of the vehicle in the horizontal plane.
# [[[end]]] (checksum: 90ebc90d8774905ddaf66bdbdd0723c4)

uint8 mav_frame
