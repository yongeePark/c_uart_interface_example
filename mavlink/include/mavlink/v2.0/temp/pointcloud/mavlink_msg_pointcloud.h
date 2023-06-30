#pragma once
// MESSAGE POINTCLOUD PACKING

#define MAVLINK_MSG_ID_POINTCLOUD 205


typedef struct __mavlink_pointcloud_t {
 uint32_t number; /*< [ms] Timestamp in milliseconds*/
 float x01; /*< [m] position*/
 float y01; /*< [m] position*/
 float z01; /*< [m] position*/
} mavlink_pointcloud_t;

#define MAVLINK_MSG_ID_POINTCLOUD_LEN 16
#define MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN 16
#define MAVLINK_MSG_ID_205_LEN 16
#define MAVLINK_MSG_ID_205_MIN_LEN 16

#define MAVLINK_MSG_ID_POINTCLOUD_CRC 189
#define MAVLINK_MSG_ID_205_CRC 189



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_POINTCLOUD { \
    205, \
    "POINTCLOUD", \
    4, \
    {  { "number", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_pointcloud_t, number) }, \
         { "x01", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_pointcloud_t, x01) }, \
         { "y01", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_pointcloud_t, y01) }, \
         { "z01", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_pointcloud_t, z01) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_POINTCLOUD { \
    "POINTCLOUD", \
    4, \
    {  { "number", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_pointcloud_t, number) }, \
         { "x01", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_pointcloud_t, x01) }, \
         { "y01", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_pointcloud_t, y01) }, \
         { "z01", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_pointcloud_t, z01) }, \
         } \
}
#endif

/**
 * @brief Pack a pointcloud message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param number [ms] Timestamp in milliseconds
 * @param x01 [m] position
 * @param y01 [m] position
 * @param z01 [m] position
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pointcloud_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t number, float x01, float y01, float z01)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POINTCLOUD_LEN];
    _mav_put_uint32_t(buf, 0, number);
    _mav_put_float(buf, 4, x01);
    _mav_put_float(buf, 8, y01);
    _mav_put_float(buf, 12, z01);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POINTCLOUD_LEN);
#else
    mavlink_pointcloud_t packet;
    packet.number = number;
    packet.x01 = x01;
    packet.y01 = y01;
    packet.z01 = z01;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POINTCLOUD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_POINTCLOUD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN, MAVLINK_MSG_ID_POINTCLOUD_LEN, MAVLINK_MSG_ID_POINTCLOUD_CRC);
}

/**
 * @brief Pack a pointcloud message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param number [ms] Timestamp in milliseconds
 * @param x01 [m] position
 * @param y01 [m] position
 * @param z01 [m] position
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pointcloud_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t number,float x01,float y01,float z01)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POINTCLOUD_LEN];
    _mav_put_uint32_t(buf, 0, number);
    _mav_put_float(buf, 4, x01);
    _mav_put_float(buf, 8, y01);
    _mav_put_float(buf, 12, z01);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POINTCLOUD_LEN);
#else
    mavlink_pointcloud_t packet;
    packet.number = number;
    packet.x01 = x01;
    packet.y01 = y01;
    packet.z01 = z01;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POINTCLOUD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_POINTCLOUD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN, MAVLINK_MSG_ID_POINTCLOUD_LEN, MAVLINK_MSG_ID_POINTCLOUD_CRC);
}

/**
 * @brief Encode a pointcloud struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pointcloud C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pointcloud_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pointcloud_t* pointcloud)
{
    return mavlink_msg_pointcloud_pack(system_id, component_id, msg, pointcloud->number, pointcloud->x01, pointcloud->y01, pointcloud->z01);
}

/**
 * @brief Encode a pointcloud struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pointcloud C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pointcloud_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pointcloud_t* pointcloud)
{
    return mavlink_msg_pointcloud_pack_chan(system_id, component_id, chan, msg, pointcloud->number, pointcloud->x01, pointcloud->y01, pointcloud->z01);
}

/**
 * @brief Send a pointcloud message
 * @param chan MAVLink channel to send the message
 *
 * @param number [ms] Timestamp in milliseconds
 * @param x01 [m] position
 * @param y01 [m] position
 * @param z01 [m] position
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pointcloud_send(mavlink_channel_t chan, uint32_t number, float x01, float y01, float z01)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POINTCLOUD_LEN];
    _mav_put_uint32_t(buf, 0, number);
    _mav_put_float(buf, 4, x01);
    _mav_put_float(buf, 8, y01);
    _mav_put_float(buf, 12, z01);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POINTCLOUD, buf, MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN, MAVLINK_MSG_ID_POINTCLOUD_LEN, MAVLINK_MSG_ID_POINTCLOUD_CRC);
#else
    mavlink_pointcloud_t packet;
    packet.number = number;
    packet.x01 = x01;
    packet.y01 = y01;
    packet.z01 = z01;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POINTCLOUD, (const char *)&packet, MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN, MAVLINK_MSG_ID_POINTCLOUD_LEN, MAVLINK_MSG_ID_POINTCLOUD_CRC);
#endif
}

/**
 * @brief Send a pointcloud message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_pointcloud_send_struct(mavlink_channel_t chan, const mavlink_pointcloud_t* pointcloud)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_pointcloud_send(chan, pointcloud->number, pointcloud->x01, pointcloud->y01, pointcloud->z01);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POINTCLOUD, (const char *)pointcloud, MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN, MAVLINK_MSG_ID_POINTCLOUD_LEN, MAVLINK_MSG_ID_POINTCLOUD_CRC);
#endif
}

#if MAVLINK_MSG_ID_POINTCLOUD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pointcloud_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t number, float x01, float y01, float z01)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, number);
    _mav_put_float(buf, 4, x01);
    _mav_put_float(buf, 8, y01);
    _mav_put_float(buf, 12, z01);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POINTCLOUD, buf, MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN, MAVLINK_MSG_ID_POINTCLOUD_LEN, MAVLINK_MSG_ID_POINTCLOUD_CRC);
#else
    mavlink_pointcloud_t *packet = (mavlink_pointcloud_t *)msgbuf;
    packet->number = number;
    packet->x01 = x01;
    packet->y01 = y01;
    packet->z01 = z01;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POINTCLOUD, (const char *)packet, MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN, MAVLINK_MSG_ID_POINTCLOUD_LEN, MAVLINK_MSG_ID_POINTCLOUD_CRC);
#endif
}
#endif

#endif

// MESSAGE POINTCLOUD UNPACKING


/**
 * @brief Get field number from pointcloud message
 *
 * @return [ms] Timestamp in milliseconds
 */
static inline uint32_t mavlink_msg_pointcloud_get_number(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field x01 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x01(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field y01 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y01(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field z01 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z01(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a pointcloud message into a struct
 *
 * @param msg The message to decode
 * @param pointcloud C-struct to decode the message contents into
 */
static inline void mavlink_msg_pointcloud_decode(const mavlink_message_t* msg, mavlink_pointcloud_t* pointcloud)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    pointcloud->number = mavlink_msg_pointcloud_get_number(msg);
    pointcloud->x01 = mavlink_msg_pointcloud_get_x01(msg);
    pointcloud->y01 = mavlink_msg_pointcloud_get_y01(msg);
    pointcloud->z01 = mavlink_msg_pointcloud_get_z01(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_POINTCLOUD_LEN? msg->len : MAVLINK_MSG_ID_POINTCLOUD_LEN;
        memset(pointcloud, 0, MAVLINK_MSG_ID_POINTCLOUD_LEN);
    memcpy(pointcloud, _MAV_PAYLOAD(msg), len);
#endif
}
