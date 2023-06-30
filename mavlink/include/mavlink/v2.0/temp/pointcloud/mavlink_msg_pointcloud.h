#pragma once
// MESSAGE POINTCLOUD PACKING

#define MAVLINK_MSG_ID_POINTCLOUD 205


typedef struct __mavlink_pointcloud_t {
 uint32_t number; /*< [ms] Timestamp in milliseconds*/
 float x01; /*< [m] position*/
 float y01; /*< [m] position*/
 float z01; /*< [m] position*/
 float x02; /*< [m] position*/
 float y02; /*< [m] position*/
 float z02; /*< [m] position*/
 float x03; /*< [m] position*/
 float y03; /*< [m] position*/
 float z03; /*< [m] position*/
 float x04; /*< [m] position*/
 float y04; /*< [m] position*/
 float z04; /*< [m] position*/
 float x05; /*< [m] position*/
 float y05; /*< [m] position*/
 float z05; /*< [m] position*/
 float x06; /*< [m] position*/
 float y06; /*< [m] position*/
 float z06; /*< [m] position*/
 float x07; /*< [m] position*/
 float y07; /*< [m] position*/
 float z07; /*< [m] position*/
 float x08; /*< [m] position*/
 float y08; /*< [m] position*/
 float z08; /*< [m] position*/
 float x09; /*< [m] position*/
 float y09; /*< [m] position*/
 float z09; /*< [m] position*/
 float x10; /*< [m] position*/
 float y10; /*< [m] position*/
 float z10; /*< [m] position*/
 float x11; /*< [m] position*/
 float y11; /*< [m] position*/
 float z11; /*< [m] position*/
 float x12; /*< [m] position*/
 float y12; /*< [m] position*/
 float z12; /*< [m] position*/
 float x13; /*< [m] position*/
 float y13; /*< [m] position*/
 float z13; /*< [m] position*/
 float x14; /*< [m] position*/
 float y14; /*< [m] position*/
 float z14; /*< [m] position*/
 float x15; /*< [m] position*/
 float y15; /*< [m] position*/
 float z15; /*< [m] position*/
 float x16; /*< [m] position*/
 float y16; /*< [m] position*/
 float z16; /*< [m] position*/
 float x17; /*< [m] position*/
 float y17; /*< [m] position*/
 float z17; /*< [m] position*/
 float x18; /*< [m] position*/
 float y18; /*< [m] position*/
 float z18; /*< [m] position*/
 float x19; /*< [m] position*/
 float y19; /*< [m] position*/
 float z19; /*< [m] position*/
 float x20; /*< [m] position*/
 float y20; /*< [m] position*/
 float z20; /*< [m] position*/
} mavlink_pointcloud_t;

#define MAVLINK_MSG_ID_POINTCLOUD_LEN 244
#define MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN 244
#define MAVLINK_MSG_ID_205_LEN 244
#define MAVLINK_MSG_ID_205_MIN_LEN 244

#define MAVLINK_MSG_ID_POINTCLOUD_CRC 242
#define MAVLINK_MSG_ID_205_CRC 242



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_POINTCLOUD { \
    205, \
    "POINTCLOUD", \
    61, \
    {  { "number", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_pointcloud_t, number) }, \
         { "x01", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_pointcloud_t, x01) }, \
         { "y01", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_pointcloud_t, y01) }, \
         { "z01", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_pointcloud_t, z01) }, \
         { "x02", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_pointcloud_t, x02) }, \
         { "y02", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_pointcloud_t, y02) }, \
         { "z02", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_pointcloud_t, z02) }, \
         { "x03", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_pointcloud_t, x03) }, \
         { "y03", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_pointcloud_t, y03) }, \
         { "z03", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_pointcloud_t, z03) }, \
         { "x04", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_pointcloud_t, x04) }, \
         { "y04", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_pointcloud_t, y04) }, \
         { "z04", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_pointcloud_t, z04) }, \
         { "x05", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_pointcloud_t, x05) }, \
         { "y05", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_pointcloud_t, y05) }, \
         { "z05", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_pointcloud_t, z05) }, \
         { "x06", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_pointcloud_t, x06) }, \
         { "y06", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_pointcloud_t, y06) }, \
         { "z06", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_pointcloud_t, z06) }, \
         { "x07", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_pointcloud_t, x07) }, \
         { "y07", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_pointcloud_t, y07) }, \
         { "z07", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_pointcloud_t, z07) }, \
         { "x08", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_pointcloud_t, x08) }, \
         { "y08", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_pointcloud_t, y08) }, \
         { "z08", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_pointcloud_t, z08) }, \
         { "x09", NULL, MAVLINK_TYPE_FLOAT, 0, 100, offsetof(mavlink_pointcloud_t, x09) }, \
         { "y09", NULL, MAVLINK_TYPE_FLOAT, 0, 104, offsetof(mavlink_pointcloud_t, y09) }, \
         { "z09", NULL, MAVLINK_TYPE_FLOAT, 0, 108, offsetof(mavlink_pointcloud_t, z09) }, \
         { "x10", NULL, MAVLINK_TYPE_FLOAT, 0, 112, offsetof(mavlink_pointcloud_t, x10) }, \
         { "y10", NULL, MAVLINK_TYPE_FLOAT, 0, 116, offsetof(mavlink_pointcloud_t, y10) }, \
         { "z10", NULL, MAVLINK_TYPE_FLOAT, 0, 120, offsetof(mavlink_pointcloud_t, z10) }, \
         { "x11", NULL, MAVLINK_TYPE_FLOAT, 0, 124, offsetof(mavlink_pointcloud_t, x11) }, \
         { "y11", NULL, MAVLINK_TYPE_FLOAT, 0, 128, offsetof(mavlink_pointcloud_t, y11) }, \
         { "z11", NULL, MAVLINK_TYPE_FLOAT, 0, 132, offsetof(mavlink_pointcloud_t, z11) }, \
         { "x12", NULL, MAVLINK_TYPE_FLOAT, 0, 136, offsetof(mavlink_pointcloud_t, x12) }, \
         { "y12", NULL, MAVLINK_TYPE_FLOAT, 0, 140, offsetof(mavlink_pointcloud_t, y12) }, \
         { "z12", NULL, MAVLINK_TYPE_FLOAT, 0, 144, offsetof(mavlink_pointcloud_t, z12) }, \
         { "x13", NULL, MAVLINK_TYPE_FLOAT, 0, 148, offsetof(mavlink_pointcloud_t, x13) }, \
         { "y13", NULL, MAVLINK_TYPE_FLOAT, 0, 152, offsetof(mavlink_pointcloud_t, y13) }, \
         { "z13", NULL, MAVLINK_TYPE_FLOAT, 0, 156, offsetof(mavlink_pointcloud_t, z13) }, \
         { "x14", NULL, MAVLINK_TYPE_FLOAT, 0, 160, offsetof(mavlink_pointcloud_t, x14) }, \
         { "y14", NULL, MAVLINK_TYPE_FLOAT, 0, 164, offsetof(mavlink_pointcloud_t, y14) }, \
         { "z14", NULL, MAVLINK_TYPE_FLOAT, 0, 168, offsetof(mavlink_pointcloud_t, z14) }, \
         { "x15", NULL, MAVLINK_TYPE_FLOAT, 0, 172, offsetof(mavlink_pointcloud_t, x15) }, \
         { "y15", NULL, MAVLINK_TYPE_FLOAT, 0, 176, offsetof(mavlink_pointcloud_t, y15) }, \
         { "z15", NULL, MAVLINK_TYPE_FLOAT, 0, 180, offsetof(mavlink_pointcloud_t, z15) }, \
         { "x16", NULL, MAVLINK_TYPE_FLOAT, 0, 184, offsetof(mavlink_pointcloud_t, x16) }, \
         { "y16", NULL, MAVLINK_TYPE_FLOAT, 0, 188, offsetof(mavlink_pointcloud_t, y16) }, \
         { "z16", NULL, MAVLINK_TYPE_FLOAT, 0, 192, offsetof(mavlink_pointcloud_t, z16) }, \
         { "x17", NULL, MAVLINK_TYPE_FLOAT, 0, 196, offsetof(mavlink_pointcloud_t, x17) }, \
         { "y17", NULL, MAVLINK_TYPE_FLOAT, 0, 200, offsetof(mavlink_pointcloud_t, y17) }, \
         { "z17", NULL, MAVLINK_TYPE_FLOAT, 0, 204, offsetof(mavlink_pointcloud_t, z17) }, \
         { "x18", NULL, MAVLINK_TYPE_FLOAT, 0, 208, offsetof(mavlink_pointcloud_t, x18) }, \
         { "y18", NULL, MAVLINK_TYPE_FLOAT, 0, 212, offsetof(mavlink_pointcloud_t, y18) }, \
         { "z18", NULL, MAVLINK_TYPE_FLOAT, 0, 216, offsetof(mavlink_pointcloud_t, z18) }, \
         { "x19", NULL, MAVLINK_TYPE_FLOAT, 0, 220, offsetof(mavlink_pointcloud_t, x19) }, \
         { "y19", NULL, MAVLINK_TYPE_FLOAT, 0, 224, offsetof(mavlink_pointcloud_t, y19) }, \
         { "z19", NULL, MAVLINK_TYPE_FLOAT, 0, 228, offsetof(mavlink_pointcloud_t, z19) }, \
         { "x20", NULL, MAVLINK_TYPE_FLOAT, 0, 232, offsetof(mavlink_pointcloud_t, x20) }, \
         { "y20", NULL, MAVLINK_TYPE_FLOAT, 0, 236, offsetof(mavlink_pointcloud_t, y20) }, \
         { "z20", NULL, MAVLINK_TYPE_FLOAT, 0, 240, offsetof(mavlink_pointcloud_t, z20) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_POINTCLOUD { \
    "POINTCLOUD", \
    61, \
    {  { "number", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_pointcloud_t, number) }, \
         { "x01", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_pointcloud_t, x01) }, \
         { "y01", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_pointcloud_t, y01) }, \
         { "z01", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_pointcloud_t, z01) }, \
         { "x02", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_pointcloud_t, x02) }, \
         { "y02", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_pointcloud_t, y02) }, \
         { "z02", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_pointcloud_t, z02) }, \
         { "x03", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_pointcloud_t, x03) }, \
         { "y03", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_pointcloud_t, y03) }, \
         { "z03", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_pointcloud_t, z03) }, \
         { "x04", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_pointcloud_t, x04) }, \
         { "y04", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_pointcloud_t, y04) }, \
         { "z04", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_pointcloud_t, z04) }, \
         { "x05", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_pointcloud_t, x05) }, \
         { "y05", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_pointcloud_t, y05) }, \
         { "z05", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_pointcloud_t, z05) }, \
         { "x06", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_pointcloud_t, x06) }, \
         { "y06", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_pointcloud_t, y06) }, \
         { "z06", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_pointcloud_t, z06) }, \
         { "x07", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_pointcloud_t, x07) }, \
         { "y07", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_pointcloud_t, y07) }, \
         { "z07", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_pointcloud_t, z07) }, \
         { "x08", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_pointcloud_t, x08) }, \
         { "y08", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_pointcloud_t, y08) }, \
         { "z08", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_pointcloud_t, z08) }, \
         { "x09", NULL, MAVLINK_TYPE_FLOAT, 0, 100, offsetof(mavlink_pointcloud_t, x09) }, \
         { "y09", NULL, MAVLINK_TYPE_FLOAT, 0, 104, offsetof(mavlink_pointcloud_t, y09) }, \
         { "z09", NULL, MAVLINK_TYPE_FLOAT, 0, 108, offsetof(mavlink_pointcloud_t, z09) }, \
         { "x10", NULL, MAVLINK_TYPE_FLOAT, 0, 112, offsetof(mavlink_pointcloud_t, x10) }, \
         { "y10", NULL, MAVLINK_TYPE_FLOAT, 0, 116, offsetof(mavlink_pointcloud_t, y10) }, \
         { "z10", NULL, MAVLINK_TYPE_FLOAT, 0, 120, offsetof(mavlink_pointcloud_t, z10) }, \
         { "x11", NULL, MAVLINK_TYPE_FLOAT, 0, 124, offsetof(mavlink_pointcloud_t, x11) }, \
         { "y11", NULL, MAVLINK_TYPE_FLOAT, 0, 128, offsetof(mavlink_pointcloud_t, y11) }, \
         { "z11", NULL, MAVLINK_TYPE_FLOAT, 0, 132, offsetof(mavlink_pointcloud_t, z11) }, \
         { "x12", NULL, MAVLINK_TYPE_FLOAT, 0, 136, offsetof(mavlink_pointcloud_t, x12) }, \
         { "y12", NULL, MAVLINK_TYPE_FLOAT, 0, 140, offsetof(mavlink_pointcloud_t, y12) }, \
         { "z12", NULL, MAVLINK_TYPE_FLOAT, 0, 144, offsetof(mavlink_pointcloud_t, z12) }, \
         { "x13", NULL, MAVLINK_TYPE_FLOAT, 0, 148, offsetof(mavlink_pointcloud_t, x13) }, \
         { "y13", NULL, MAVLINK_TYPE_FLOAT, 0, 152, offsetof(mavlink_pointcloud_t, y13) }, \
         { "z13", NULL, MAVLINK_TYPE_FLOAT, 0, 156, offsetof(mavlink_pointcloud_t, z13) }, \
         { "x14", NULL, MAVLINK_TYPE_FLOAT, 0, 160, offsetof(mavlink_pointcloud_t, x14) }, \
         { "y14", NULL, MAVLINK_TYPE_FLOAT, 0, 164, offsetof(mavlink_pointcloud_t, y14) }, \
         { "z14", NULL, MAVLINK_TYPE_FLOAT, 0, 168, offsetof(mavlink_pointcloud_t, z14) }, \
         { "x15", NULL, MAVLINK_TYPE_FLOAT, 0, 172, offsetof(mavlink_pointcloud_t, x15) }, \
         { "y15", NULL, MAVLINK_TYPE_FLOAT, 0, 176, offsetof(mavlink_pointcloud_t, y15) }, \
         { "z15", NULL, MAVLINK_TYPE_FLOAT, 0, 180, offsetof(mavlink_pointcloud_t, z15) }, \
         { "x16", NULL, MAVLINK_TYPE_FLOAT, 0, 184, offsetof(mavlink_pointcloud_t, x16) }, \
         { "y16", NULL, MAVLINK_TYPE_FLOAT, 0, 188, offsetof(mavlink_pointcloud_t, y16) }, \
         { "z16", NULL, MAVLINK_TYPE_FLOAT, 0, 192, offsetof(mavlink_pointcloud_t, z16) }, \
         { "x17", NULL, MAVLINK_TYPE_FLOAT, 0, 196, offsetof(mavlink_pointcloud_t, x17) }, \
         { "y17", NULL, MAVLINK_TYPE_FLOAT, 0, 200, offsetof(mavlink_pointcloud_t, y17) }, \
         { "z17", NULL, MAVLINK_TYPE_FLOAT, 0, 204, offsetof(mavlink_pointcloud_t, z17) }, \
         { "x18", NULL, MAVLINK_TYPE_FLOAT, 0, 208, offsetof(mavlink_pointcloud_t, x18) }, \
         { "y18", NULL, MAVLINK_TYPE_FLOAT, 0, 212, offsetof(mavlink_pointcloud_t, y18) }, \
         { "z18", NULL, MAVLINK_TYPE_FLOAT, 0, 216, offsetof(mavlink_pointcloud_t, z18) }, \
         { "x19", NULL, MAVLINK_TYPE_FLOAT, 0, 220, offsetof(mavlink_pointcloud_t, x19) }, \
         { "y19", NULL, MAVLINK_TYPE_FLOAT, 0, 224, offsetof(mavlink_pointcloud_t, y19) }, \
         { "z19", NULL, MAVLINK_TYPE_FLOAT, 0, 228, offsetof(mavlink_pointcloud_t, z19) }, \
         { "x20", NULL, MAVLINK_TYPE_FLOAT, 0, 232, offsetof(mavlink_pointcloud_t, x20) }, \
         { "y20", NULL, MAVLINK_TYPE_FLOAT, 0, 236, offsetof(mavlink_pointcloud_t, y20) }, \
         { "z20", NULL, MAVLINK_TYPE_FLOAT, 0, 240, offsetof(mavlink_pointcloud_t, z20) }, \
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
 * @param x02 [m] position
 * @param y02 [m] position
 * @param z02 [m] position
 * @param x03 [m] position
 * @param y03 [m] position
 * @param z03 [m] position
 * @param x04 [m] position
 * @param y04 [m] position
 * @param z04 [m] position
 * @param x05 [m] position
 * @param y05 [m] position
 * @param z05 [m] position
 * @param x06 [m] position
 * @param y06 [m] position
 * @param z06 [m] position
 * @param x07 [m] position
 * @param y07 [m] position
 * @param z07 [m] position
 * @param x08 [m] position
 * @param y08 [m] position
 * @param z08 [m] position
 * @param x09 [m] position
 * @param y09 [m] position
 * @param z09 [m] position
 * @param x10 [m] position
 * @param y10 [m] position
 * @param z10 [m] position
 * @param x11 [m] position
 * @param y11 [m] position
 * @param z11 [m] position
 * @param x12 [m] position
 * @param y12 [m] position
 * @param z12 [m] position
 * @param x13 [m] position
 * @param y13 [m] position
 * @param z13 [m] position
 * @param x14 [m] position
 * @param y14 [m] position
 * @param z14 [m] position
 * @param x15 [m] position
 * @param y15 [m] position
 * @param z15 [m] position
 * @param x16 [m] position
 * @param y16 [m] position
 * @param z16 [m] position
 * @param x17 [m] position
 * @param y17 [m] position
 * @param z17 [m] position
 * @param x18 [m] position
 * @param y18 [m] position
 * @param z18 [m] position
 * @param x19 [m] position
 * @param y19 [m] position
 * @param z19 [m] position
 * @param x20 [m] position
 * @param y20 [m] position
 * @param z20 [m] position
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pointcloud_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t number, float x01, float y01, float z01, float x02, float y02, float z02, float x03, float y03, float z03, float x04, float y04, float z04, float x05, float y05, float z05, float x06, float y06, float z06, float x07, float y07, float z07, float x08, float y08, float z08, float x09, float y09, float z09, float x10, float y10, float z10, float x11, float y11, float z11, float x12, float y12, float z12, float x13, float y13, float z13, float x14, float y14, float z14, float x15, float y15, float z15, float x16, float y16, float z16, float x17, float y17, float z17, float x18, float y18, float z18, float x19, float y19, float z19, float x20, float y20, float z20)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POINTCLOUD_LEN];
    _mav_put_uint32_t(buf, 0, number);
    _mav_put_float(buf, 4, x01);
    _mav_put_float(buf, 8, y01);
    _mav_put_float(buf, 12, z01);
    _mav_put_float(buf, 16, x02);
    _mav_put_float(buf, 20, y02);
    _mav_put_float(buf, 24, z02);
    _mav_put_float(buf, 28, x03);
    _mav_put_float(buf, 32, y03);
    _mav_put_float(buf, 36, z03);
    _mav_put_float(buf, 40, x04);
    _mav_put_float(buf, 44, y04);
    _mav_put_float(buf, 48, z04);
    _mav_put_float(buf, 52, x05);
    _mav_put_float(buf, 56, y05);
    _mav_put_float(buf, 60, z05);
    _mav_put_float(buf, 64, x06);
    _mav_put_float(buf, 68, y06);
    _mav_put_float(buf, 72, z06);
    _mav_put_float(buf, 76, x07);
    _mav_put_float(buf, 80, y07);
    _mav_put_float(buf, 84, z07);
    _mav_put_float(buf, 88, x08);
    _mav_put_float(buf, 92, y08);
    _mav_put_float(buf, 96, z08);
    _mav_put_float(buf, 100, x09);
    _mav_put_float(buf, 104, y09);
    _mav_put_float(buf, 108, z09);
    _mav_put_float(buf, 112, x10);
    _mav_put_float(buf, 116, y10);
    _mav_put_float(buf, 120, z10);
    _mav_put_float(buf, 124, x11);
    _mav_put_float(buf, 128, y11);
    _mav_put_float(buf, 132, z11);
    _mav_put_float(buf, 136, x12);
    _mav_put_float(buf, 140, y12);
    _mav_put_float(buf, 144, z12);
    _mav_put_float(buf, 148, x13);
    _mav_put_float(buf, 152, y13);
    _mav_put_float(buf, 156, z13);
    _mav_put_float(buf, 160, x14);
    _mav_put_float(buf, 164, y14);
    _mav_put_float(buf, 168, z14);
    _mav_put_float(buf, 172, x15);
    _mav_put_float(buf, 176, y15);
    _mav_put_float(buf, 180, z15);
    _mav_put_float(buf, 184, x16);
    _mav_put_float(buf, 188, y16);
    _mav_put_float(buf, 192, z16);
    _mav_put_float(buf, 196, x17);
    _mav_put_float(buf, 200, y17);
    _mav_put_float(buf, 204, z17);
    _mav_put_float(buf, 208, x18);
    _mav_put_float(buf, 212, y18);
    _mav_put_float(buf, 216, z18);
    _mav_put_float(buf, 220, x19);
    _mav_put_float(buf, 224, y19);
    _mav_put_float(buf, 228, z19);
    _mav_put_float(buf, 232, x20);
    _mav_put_float(buf, 236, y20);
    _mav_put_float(buf, 240, z20);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POINTCLOUD_LEN);
#else
    mavlink_pointcloud_t packet;
    packet.number = number;
    packet.x01 = x01;
    packet.y01 = y01;
    packet.z01 = z01;
    packet.x02 = x02;
    packet.y02 = y02;
    packet.z02 = z02;
    packet.x03 = x03;
    packet.y03 = y03;
    packet.z03 = z03;
    packet.x04 = x04;
    packet.y04 = y04;
    packet.z04 = z04;
    packet.x05 = x05;
    packet.y05 = y05;
    packet.z05 = z05;
    packet.x06 = x06;
    packet.y06 = y06;
    packet.z06 = z06;
    packet.x07 = x07;
    packet.y07 = y07;
    packet.z07 = z07;
    packet.x08 = x08;
    packet.y08 = y08;
    packet.z08 = z08;
    packet.x09 = x09;
    packet.y09 = y09;
    packet.z09 = z09;
    packet.x10 = x10;
    packet.y10 = y10;
    packet.z10 = z10;
    packet.x11 = x11;
    packet.y11 = y11;
    packet.z11 = z11;
    packet.x12 = x12;
    packet.y12 = y12;
    packet.z12 = z12;
    packet.x13 = x13;
    packet.y13 = y13;
    packet.z13 = z13;
    packet.x14 = x14;
    packet.y14 = y14;
    packet.z14 = z14;
    packet.x15 = x15;
    packet.y15 = y15;
    packet.z15 = z15;
    packet.x16 = x16;
    packet.y16 = y16;
    packet.z16 = z16;
    packet.x17 = x17;
    packet.y17 = y17;
    packet.z17 = z17;
    packet.x18 = x18;
    packet.y18 = y18;
    packet.z18 = z18;
    packet.x19 = x19;
    packet.y19 = y19;
    packet.z19 = z19;
    packet.x20 = x20;
    packet.y20 = y20;
    packet.z20 = z20;

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
 * @param x02 [m] position
 * @param y02 [m] position
 * @param z02 [m] position
 * @param x03 [m] position
 * @param y03 [m] position
 * @param z03 [m] position
 * @param x04 [m] position
 * @param y04 [m] position
 * @param z04 [m] position
 * @param x05 [m] position
 * @param y05 [m] position
 * @param z05 [m] position
 * @param x06 [m] position
 * @param y06 [m] position
 * @param z06 [m] position
 * @param x07 [m] position
 * @param y07 [m] position
 * @param z07 [m] position
 * @param x08 [m] position
 * @param y08 [m] position
 * @param z08 [m] position
 * @param x09 [m] position
 * @param y09 [m] position
 * @param z09 [m] position
 * @param x10 [m] position
 * @param y10 [m] position
 * @param z10 [m] position
 * @param x11 [m] position
 * @param y11 [m] position
 * @param z11 [m] position
 * @param x12 [m] position
 * @param y12 [m] position
 * @param z12 [m] position
 * @param x13 [m] position
 * @param y13 [m] position
 * @param z13 [m] position
 * @param x14 [m] position
 * @param y14 [m] position
 * @param z14 [m] position
 * @param x15 [m] position
 * @param y15 [m] position
 * @param z15 [m] position
 * @param x16 [m] position
 * @param y16 [m] position
 * @param z16 [m] position
 * @param x17 [m] position
 * @param y17 [m] position
 * @param z17 [m] position
 * @param x18 [m] position
 * @param y18 [m] position
 * @param z18 [m] position
 * @param x19 [m] position
 * @param y19 [m] position
 * @param z19 [m] position
 * @param x20 [m] position
 * @param y20 [m] position
 * @param z20 [m] position
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pointcloud_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t number,float x01,float y01,float z01,float x02,float y02,float z02,float x03,float y03,float z03,float x04,float y04,float z04,float x05,float y05,float z05,float x06,float y06,float z06,float x07,float y07,float z07,float x08,float y08,float z08,float x09,float y09,float z09,float x10,float y10,float z10,float x11,float y11,float z11,float x12,float y12,float z12,float x13,float y13,float z13,float x14,float y14,float z14,float x15,float y15,float z15,float x16,float y16,float z16,float x17,float y17,float z17,float x18,float y18,float z18,float x19,float y19,float z19,float x20,float y20,float z20)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POINTCLOUD_LEN];
    _mav_put_uint32_t(buf, 0, number);
    _mav_put_float(buf, 4, x01);
    _mav_put_float(buf, 8, y01);
    _mav_put_float(buf, 12, z01);
    _mav_put_float(buf, 16, x02);
    _mav_put_float(buf, 20, y02);
    _mav_put_float(buf, 24, z02);
    _mav_put_float(buf, 28, x03);
    _mav_put_float(buf, 32, y03);
    _mav_put_float(buf, 36, z03);
    _mav_put_float(buf, 40, x04);
    _mav_put_float(buf, 44, y04);
    _mav_put_float(buf, 48, z04);
    _mav_put_float(buf, 52, x05);
    _mav_put_float(buf, 56, y05);
    _mav_put_float(buf, 60, z05);
    _mav_put_float(buf, 64, x06);
    _mav_put_float(buf, 68, y06);
    _mav_put_float(buf, 72, z06);
    _mav_put_float(buf, 76, x07);
    _mav_put_float(buf, 80, y07);
    _mav_put_float(buf, 84, z07);
    _mav_put_float(buf, 88, x08);
    _mav_put_float(buf, 92, y08);
    _mav_put_float(buf, 96, z08);
    _mav_put_float(buf, 100, x09);
    _mav_put_float(buf, 104, y09);
    _mav_put_float(buf, 108, z09);
    _mav_put_float(buf, 112, x10);
    _mav_put_float(buf, 116, y10);
    _mav_put_float(buf, 120, z10);
    _mav_put_float(buf, 124, x11);
    _mav_put_float(buf, 128, y11);
    _mav_put_float(buf, 132, z11);
    _mav_put_float(buf, 136, x12);
    _mav_put_float(buf, 140, y12);
    _mav_put_float(buf, 144, z12);
    _mav_put_float(buf, 148, x13);
    _mav_put_float(buf, 152, y13);
    _mav_put_float(buf, 156, z13);
    _mav_put_float(buf, 160, x14);
    _mav_put_float(buf, 164, y14);
    _mav_put_float(buf, 168, z14);
    _mav_put_float(buf, 172, x15);
    _mav_put_float(buf, 176, y15);
    _mav_put_float(buf, 180, z15);
    _mav_put_float(buf, 184, x16);
    _mav_put_float(buf, 188, y16);
    _mav_put_float(buf, 192, z16);
    _mav_put_float(buf, 196, x17);
    _mav_put_float(buf, 200, y17);
    _mav_put_float(buf, 204, z17);
    _mav_put_float(buf, 208, x18);
    _mav_put_float(buf, 212, y18);
    _mav_put_float(buf, 216, z18);
    _mav_put_float(buf, 220, x19);
    _mav_put_float(buf, 224, y19);
    _mav_put_float(buf, 228, z19);
    _mav_put_float(buf, 232, x20);
    _mav_put_float(buf, 236, y20);
    _mav_put_float(buf, 240, z20);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POINTCLOUD_LEN);
#else
    mavlink_pointcloud_t packet;
    packet.number = number;
    packet.x01 = x01;
    packet.y01 = y01;
    packet.z01 = z01;
    packet.x02 = x02;
    packet.y02 = y02;
    packet.z02 = z02;
    packet.x03 = x03;
    packet.y03 = y03;
    packet.z03 = z03;
    packet.x04 = x04;
    packet.y04 = y04;
    packet.z04 = z04;
    packet.x05 = x05;
    packet.y05 = y05;
    packet.z05 = z05;
    packet.x06 = x06;
    packet.y06 = y06;
    packet.z06 = z06;
    packet.x07 = x07;
    packet.y07 = y07;
    packet.z07 = z07;
    packet.x08 = x08;
    packet.y08 = y08;
    packet.z08 = z08;
    packet.x09 = x09;
    packet.y09 = y09;
    packet.z09 = z09;
    packet.x10 = x10;
    packet.y10 = y10;
    packet.z10 = z10;
    packet.x11 = x11;
    packet.y11 = y11;
    packet.z11 = z11;
    packet.x12 = x12;
    packet.y12 = y12;
    packet.z12 = z12;
    packet.x13 = x13;
    packet.y13 = y13;
    packet.z13 = z13;
    packet.x14 = x14;
    packet.y14 = y14;
    packet.z14 = z14;
    packet.x15 = x15;
    packet.y15 = y15;
    packet.z15 = z15;
    packet.x16 = x16;
    packet.y16 = y16;
    packet.z16 = z16;
    packet.x17 = x17;
    packet.y17 = y17;
    packet.z17 = z17;
    packet.x18 = x18;
    packet.y18 = y18;
    packet.z18 = z18;
    packet.x19 = x19;
    packet.y19 = y19;
    packet.z19 = z19;
    packet.x20 = x20;
    packet.y20 = y20;
    packet.z20 = z20;

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
    return mavlink_msg_pointcloud_pack(system_id, component_id, msg, pointcloud->number, pointcloud->x01, pointcloud->y01, pointcloud->z01, pointcloud->x02, pointcloud->y02, pointcloud->z02, pointcloud->x03, pointcloud->y03, pointcloud->z03, pointcloud->x04, pointcloud->y04, pointcloud->z04, pointcloud->x05, pointcloud->y05, pointcloud->z05, pointcloud->x06, pointcloud->y06, pointcloud->z06, pointcloud->x07, pointcloud->y07, pointcloud->z07, pointcloud->x08, pointcloud->y08, pointcloud->z08, pointcloud->x09, pointcloud->y09, pointcloud->z09, pointcloud->x10, pointcloud->y10, pointcloud->z10, pointcloud->x11, pointcloud->y11, pointcloud->z11, pointcloud->x12, pointcloud->y12, pointcloud->z12, pointcloud->x13, pointcloud->y13, pointcloud->z13, pointcloud->x14, pointcloud->y14, pointcloud->z14, pointcloud->x15, pointcloud->y15, pointcloud->z15, pointcloud->x16, pointcloud->y16, pointcloud->z16, pointcloud->x17, pointcloud->y17, pointcloud->z17, pointcloud->x18, pointcloud->y18, pointcloud->z18, pointcloud->x19, pointcloud->y19, pointcloud->z19, pointcloud->x20, pointcloud->y20, pointcloud->z20);
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
    return mavlink_msg_pointcloud_pack_chan(system_id, component_id, chan, msg, pointcloud->number, pointcloud->x01, pointcloud->y01, pointcloud->z01, pointcloud->x02, pointcloud->y02, pointcloud->z02, pointcloud->x03, pointcloud->y03, pointcloud->z03, pointcloud->x04, pointcloud->y04, pointcloud->z04, pointcloud->x05, pointcloud->y05, pointcloud->z05, pointcloud->x06, pointcloud->y06, pointcloud->z06, pointcloud->x07, pointcloud->y07, pointcloud->z07, pointcloud->x08, pointcloud->y08, pointcloud->z08, pointcloud->x09, pointcloud->y09, pointcloud->z09, pointcloud->x10, pointcloud->y10, pointcloud->z10, pointcloud->x11, pointcloud->y11, pointcloud->z11, pointcloud->x12, pointcloud->y12, pointcloud->z12, pointcloud->x13, pointcloud->y13, pointcloud->z13, pointcloud->x14, pointcloud->y14, pointcloud->z14, pointcloud->x15, pointcloud->y15, pointcloud->z15, pointcloud->x16, pointcloud->y16, pointcloud->z16, pointcloud->x17, pointcloud->y17, pointcloud->z17, pointcloud->x18, pointcloud->y18, pointcloud->z18, pointcloud->x19, pointcloud->y19, pointcloud->z19, pointcloud->x20, pointcloud->y20, pointcloud->z20);
}

/**
 * @brief Send a pointcloud message
 * @param chan MAVLink channel to send the message
 *
 * @param number [ms] Timestamp in milliseconds
 * @param x01 [m] position
 * @param y01 [m] position
 * @param z01 [m] position
 * @param x02 [m] position
 * @param y02 [m] position
 * @param z02 [m] position
 * @param x03 [m] position
 * @param y03 [m] position
 * @param z03 [m] position
 * @param x04 [m] position
 * @param y04 [m] position
 * @param z04 [m] position
 * @param x05 [m] position
 * @param y05 [m] position
 * @param z05 [m] position
 * @param x06 [m] position
 * @param y06 [m] position
 * @param z06 [m] position
 * @param x07 [m] position
 * @param y07 [m] position
 * @param z07 [m] position
 * @param x08 [m] position
 * @param y08 [m] position
 * @param z08 [m] position
 * @param x09 [m] position
 * @param y09 [m] position
 * @param z09 [m] position
 * @param x10 [m] position
 * @param y10 [m] position
 * @param z10 [m] position
 * @param x11 [m] position
 * @param y11 [m] position
 * @param z11 [m] position
 * @param x12 [m] position
 * @param y12 [m] position
 * @param z12 [m] position
 * @param x13 [m] position
 * @param y13 [m] position
 * @param z13 [m] position
 * @param x14 [m] position
 * @param y14 [m] position
 * @param z14 [m] position
 * @param x15 [m] position
 * @param y15 [m] position
 * @param z15 [m] position
 * @param x16 [m] position
 * @param y16 [m] position
 * @param z16 [m] position
 * @param x17 [m] position
 * @param y17 [m] position
 * @param z17 [m] position
 * @param x18 [m] position
 * @param y18 [m] position
 * @param z18 [m] position
 * @param x19 [m] position
 * @param y19 [m] position
 * @param z19 [m] position
 * @param x20 [m] position
 * @param y20 [m] position
 * @param z20 [m] position
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pointcloud_send(mavlink_channel_t chan, uint32_t number, float x01, float y01, float z01, float x02, float y02, float z02, float x03, float y03, float z03, float x04, float y04, float z04, float x05, float y05, float z05, float x06, float y06, float z06, float x07, float y07, float z07, float x08, float y08, float z08, float x09, float y09, float z09, float x10, float y10, float z10, float x11, float y11, float z11, float x12, float y12, float z12, float x13, float y13, float z13, float x14, float y14, float z14, float x15, float y15, float z15, float x16, float y16, float z16, float x17, float y17, float z17, float x18, float y18, float z18, float x19, float y19, float z19, float x20, float y20, float z20)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POINTCLOUD_LEN];
    _mav_put_uint32_t(buf, 0, number);
    _mav_put_float(buf, 4, x01);
    _mav_put_float(buf, 8, y01);
    _mav_put_float(buf, 12, z01);
    _mav_put_float(buf, 16, x02);
    _mav_put_float(buf, 20, y02);
    _mav_put_float(buf, 24, z02);
    _mav_put_float(buf, 28, x03);
    _mav_put_float(buf, 32, y03);
    _mav_put_float(buf, 36, z03);
    _mav_put_float(buf, 40, x04);
    _mav_put_float(buf, 44, y04);
    _mav_put_float(buf, 48, z04);
    _mav_put_float(buf, 52, x05);
    _mav_put_float(buf, 56, y05);
    _mav_put_float(buf, 60, z05);
    _mav_put_float(buf, 64, x06);
    _mav_put_float(buf, 68, y06);
    _mav_put_float(buf, 72, z06);
    _mav_put_float(buf, 76, x07);
    _mav_put_float(buf, 80, y07);
    _mav_put_float(buf, 84, z07);
    _mav_put_float(buf, 88, x08);
    _mav_put_float(buf, 92, y08);
    _mav_put_float(buf, 96, z08);
    _mav_put_float(buf, 100, x09);
    _mav_put_float(buf, 104, y09);
    _mav_put_float(buf, 108, z09);
    _mav_put_float(buf, 112, x10);
    _mav_put_float(buf, 116, y10);
    _mav_put_float(buf, 120, z10);
    _mav_put_float(buf, 124, x11);
    _mav_put_float(buf, 128, y11);
    _mav_put_float(buf, 132, z11);
    _mav_put_float(buf, 136, x12);
    _mav_put_float(buf, 140, y12);
    _mav_put_float(buf, 144, z12);
    _mav_put_float(buf, 148, x13);
    _mav_put_float(buf, 152, y13);
    _mav_put_float(buf, 156, z13);
    _mav_put_float(buf, 160, x14);
    _mav_put_float(buf, 164, y14);
    _mav_put_float(buf, 168, z14);
    _mav_put_float(buf, 172, x15);
    _mav_put_float(buf, 176, y15);
    _mav_put_float(buf, 180, z15);
    _mav_put_float(buf, 184, x16);
    _mav_put_float(buf, 188, y16);
    _mav_put_float(buf, 192, z16);
    _mav_put_float(buf, 196, x17);
    _mav_put_float(buf, 200, y17);
    _mav_put_float(buf, 204, z17);
    _mav_put_float(buf, 208, x18);
    _mav_put_float(buf, 212, y18);
    _mav_put_float(buf, 216, z18);
    _mav_put_float(buf, 220, x19);
    _mav_put_float(buf, 224, y19);
    _mav_put_float(buf, 228, z19);
    _mav_put_float(buf, 232, x20);
    _mav_put_float(buf, 236, y20);
    _mav_put_float(buf, 240, z20);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POINTCLOUD, buf, MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN, MAVLINK_MSG_ID_POINTCLOUD_LEN, MAVLINK_MSG_ID_POINTCLOUD_CRC);
#else
    mavlink_pointcloud_t packet;
    packet.number = number;
    packet.x01 = x01;
    packet.y01 = y01;
    packet.z01 = z01;
    packet.x02 = x02;
    packet.y02 = y02;
    packet.z02 = z02;
    packet.x03 = x03;
    packet.y03 = y03;
    packet.z03 = z03;
    packet.x04 = x04;
    packet.y04 = y04;
    packet.z04 = z04;
    packet.x05 = x05;
    packet.y05 = y05;
    packet.z05 = z05;
    packet.x06 = x06;
    packet.y06 = y06;
    packet.z06 = z06;
    packet.x07 = x07;
    packet.y07 = y07;
    packet.z07 = z07;
    packet.x08 = x08;
    packet.y08 = y08;
    packet.z08 = z08;
    packet.x09 = x09;
    packet.y09 = y09;
    packet.z09 = z09;
    packet.x10 = x10;
    packet.y10 = y10;
    packet.z10 = z10;
    packet.x11 = x11;
    packet.y11 = y11;
    packet.z11 = z11;
    packet.x12 = x12;
    packet.y12 = y12;
    packet.z12 = z12;
    packet.x13 = x13;
    packet.y13 = y13;
    packet.z13 = z13;
    packet.x14 = x14;
    packet.y14 = y14;
    packet.z14 = z14;
    packet.x15 = x15;
    packet.y15 = y15;
    packet.z15 = z15;
    packet.x16 = x16;
    packet.y16 = y16;
    packet.z16 = z16;
    packet.x17 = x17;
    packet.y17 = y17;
    packet.z17 = z17;
    packet.x18 = x18;
    packet.y18 = y18;
    packet.z18 = z18;
    packet.x19 = x19;
    packet.y19 = y19;
    packet.z19 = z19;
    packet.x20 = x20;
    packet.y20 = y20;
    packet.z20 = z20;

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
    mavlink_msg_pointcloud_send(chan, pointcloud->number, pointcloud->x01, pointcloud->y01, pointcloud->z01, pointcloud->x02, pointcloud->y02, pointcloud->z02, pointcloud->x03, pointcloud->y03, pointcloud->z03, pointcloud->x04, pointcloud->y04, pointcloud->z04, pointcloud->x05, pointcloud->y05, pointcloud->z05, pointcloud->x06, pointcloud->y06, pointcloud->z06, pointcloud->x07, pointcloud->y07, pointcloud->z07, pointcloud->x08, pointcloud->y08, pointcloud->z08, pointcloud->x09, pointcloud->y09, pointcloud->z09, pointcloud->x10, pointcloud->y10, pointcloud->z10, pointcloud->x11, pointcloud->y11, pointcloud->z11, pointcloud->x12, pointcloud->y12, pointcloud->z12, pointcloud->x13, pointcloud->y13, pointcloud->z13, pointcloud->x14, pointcloud->y14, pointcloud->z14, pointcloud->x15, pointcloud->y15, pointcloud->z15, pointcloud->x16, pointcloud->y16, pointcloud->z16, pointcloud->x17, pointcloud->y17, pointcloud->z17, pointcloud->x18, pointcloud->y18, pointcloud->z18, pointcloud->x19, pointcloud->y19, pointcloud->z19, pointcloud->x20, pointcloud->y20, pointcloud->z20);
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
static inline void mavlink_msg_pointcloud_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t number, float x01, float y01, float z01, float x02, float y02, float z02, float x03, float y03, float z03, float x04, float y04, float z04, float x05, float y05, float z05, float x06, float y06, float z06, float x07, float y07, float z07, float x08, float y08, float z08, float x09, float y09, float z09, float x10, float y10, float z10, float x11, float y11, float z11, float x12, float y12, float z12, float x13, float y13, float z13, float x14, float y14, float z14, float x15, float y15, float z15, float x16, float y16, float z16, float x17, float y17, float z17, float x18, float y18, float z18, float x19, float y19, float z19, float x20, float y20, float z20)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, number);
    _mav_put_float(buf, 4, x01);
    _mav_put_float(buf, 8, y01);
    _mav_put_float(buf, 12, z01);
    _mav_put_float(buf, 16, x02);
    _mav_put_float(buf, 20, y02);
    _mav_put_float(buf, 24, z02);
    _mav_put_float(buf, 28, x03);
    _mav_put_float(buf, 32, y03);
    _mav_put_float(buf, 36, z03);
    _mav_put_float(buf, 40, x04);
    _mav_put_float(buf, 44, y04);
    _mav_put_float(buf, 48, z04);
    _mav_put_float(buf, 52, x05);
    _mav_put_float(buf, 56, y05);
    _mav_put_float(buf, 60, z05);
    _mav_put_float(buf, 64, x06);
    _mav_put_float(buf, 68, y06);
    _mav_put_float(buf, 72, z06);
    _mav_put_float(buf, 76, x07);
    _mav_put_float(buf, 80, y07);
    _mav_put_float(buf, 84, z07);
    _mav_put_float(buf, 88, x08);
    _mav_put_float(buf, 92, y08);
    _mav_put_float(buf, 96, z08);
    _mav_put_float(buf, 100, x09);
    _mav_put_float(buf, 104, y09);
    _mav_put_float(buf, 108, z09);
    _mav_put_float(buf, 112, x10);
    _mav_put_float(buf, 116, y10);
    _mav_put_float(buf, 120, z10);
    _mav_put_float(buf, 124, x11);
    _mav_put_float(buf, 128, y11);
    _mav_put_float(buf, 132, z11);
    _mav_put_float(buf, 136, x12);
    _mav_put_float(buf, 140, y12);
    _mav_put_float(buf, 144, z12);
    _mav_put_float(buf, 148, x13);
    _mav_put_float(buf, 152, y13);
    _mav_put_float(buf, 156, z13);
    _mav_put_float(buf, 160, x14);
    _mav_put_float(buf, 164, y14);
    _mav_put_float(buf, 168, z14);
    _mav_put_float(buf, 172, x15);
    _mav_put_float(buf, 176, y15);
    _mav_put_float(buf, 180, z15);
    _mav_put_float(buf, 184, x16);
    _mav_put_float(buf, 188, y16);
    _mav_put_float(buf, 192, z16);
    _mav_put_float(buf, 196, x17);
    _mav_put_float(buf, 200, y17);
    _mav_put_float(buf, 204, z17);
    _mav_put_float(buf, 208, x18);
    _mav_put_float(buf, 212, y18);
    _mav_put_float(buf, 216, z18);
    _mav_put_float(buf, 220, x19);
    _mav_put_float(buf, 224, y19);
    _mav_put_float(buf, 228, z19);
    _mav_put_float(buf, 232, x20);
    _mav_put_float(buf, 236, y20);
    _mav_put_float(buf, 240, z20);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POINTCLOUD, buf, MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN, MAVLINK_MSG_ID_POINTCLOUD_LEN, MAVLINK_MSG_ID_POINTCLOUD_CRC);
#else
    mavlink_pointcloud_t *packet = (mavlink_pointcloud_t *)msgbuf;
    packet->number = number;
    packet->x01 = x01;
    packet->y01 = y01;
    packet->z01 = z01;
    packet->x02 = x02;
    packet->y02 = y02;
    packet->z02 = z02;
    packet->x03 = x03;
    packet->y03 = y03;
    packet->z03 = z03;
    packet->x04 = x04;
    packet->y04 = y04;
    packet->z04 = z04;
    packet->x05 = x05;
    packet->y05 = y05;
    packet->z05 = z05;
    packet->x06 = x06;
    packet->y06 = y06;
    packet->z06 = z06;
    packet->x07 = x07;
    packet->y07 = y07;
    packet->z07 = z07;
    packet->x08 = x08;
    packet->y08 = y08;
    packet->z08 = z08;
    packet->x09 = x09;
    packet->y09 = y09;
    packet->z09 = z09;
    packet->x10 = x10;
    packet->y10 = y10;
    packet->z10 = z10;
    packet->x11 = x11;
    packet->y11 = y11;
    packet->z11 = z11;
    packet->x12 = x12;
    packet->y12 = y12;
    packet->z12 = z12;
    packet->x13 = x13;
    packet->y13 = y13;
    packet->z13 = z13;
    packet->x14 = x14;
    packet->y14 = y14;
    packet->z14 = z14;
    packet->x15 = x15;
    packet->y15 = y15;
    packet->z15 = z15;
    packet->x16 = x16;
    packet->y16 = y16;
    packet->z16 = z16;
    packet->x17 = x17;
    packet->y17 = y17;
    packet->z17 = z17;
    packet->x18 = x18;
    packet->y18 = y18;
    packet->z18 = z18;
    packet->x19 = x19;
    packet->y19 = y19;
    packet->z19 = z19;
    packet->x20 = x20;
    packet->y20 = y20;
    packet->z20 = z20;

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
 * @brief Get field x02 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x02(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field y02 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y02(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field z02 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z02(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field x03 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x03(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field y03 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y03(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field z03 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z03(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field x04 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x04(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field y04 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y04(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field z04 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z04(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field x05 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x05(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field y05 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y05(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field z05 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z05(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field x06 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x06(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field y06 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y06(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field z06 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z06(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  72);
}

/**
 * @brief Get field x07 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x07(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  76);
}

/**
 * @brief Get field y07 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y07(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  80);
}

/**
 * @brief Get field z07 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z07(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  84);
}

/**
 * @brief Get field x08 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x08(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  88);
}

/**
 * @brief Get field y08 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y08(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  92);
}

/**
 * @brief Get field z08 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z08(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  96);
}

/**
 * @brief Get field x09 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x09(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  100);
}

/**
 * @brief Get field y09 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y09(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  104);
}

/**
 * @brief Get field z09 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z09(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  108);
}

/**
 * @brief Get field x10 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x10(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  112);
}

/**
 * @brief Get field y10 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y10(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  116);
}

/**
 * @brief Get field z10 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z10(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  120);
}

/**
 * @brief Get field x11 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x11(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  124);
}

/**
 * @brief Get field y11 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y11(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  128);
}

/**
 * @brief Get field z11 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z11(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  132);
}

/**
 * @brief Get field x12 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x12(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  136);
}

/**
 * @brief Get field y12 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y12(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  140);
}

/**
 * @brief Get field z12 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z12(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  144);
}

/**
 * @brief Get field x13 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x13(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  148);
}

/**
 * @brief Get field y13 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y13(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  152);
}

/**
 * @brief Get field z13 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z13(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  156);
}

/**
 * @brief Get field x14 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x14(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  160);
}

/**
 * @brief Get field y14 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y14(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  164);
}

/**
 * @brief Get field z14 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z14(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  168);
}

/**
 * @brief Get field x15 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x15(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  172);
}

/**
 * @brief Get field y15 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y15(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  176);
}

/**
 * @brief Get field z15 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z15(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  180);
}

/**
 * @brief Get field x16 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x16(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  184);
}

/**
 * @brief Get field y16 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y16(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  188);
}

/**
 * @brief Get field z16 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z16(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  192);
}

/**
 * @brief Get field x17 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x17(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  196);
}

/**
 * @brief Get field y17 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y17(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  200);
}

/**
 * @brief Get field z17 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z17(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  204);
}

/**
 * @brief Get field x18 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x18(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  208);
}

/**
 * @brief Get field y18 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y18(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  212);
}

/**
 * @brief Get field z18 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z18(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  216);
}

/**
 * @brief Get field x19 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x19(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  220);
}

/**
 * @brief Get field y19 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y19(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  224);
}

/**
 * @brief Get field z19 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z19(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  228);
}

/**
 * @brief Get field x20 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_x20(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  232);
}

/**
 * @brief Get field y20 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_y20(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  236);
}

/**
 * @brief Get field z20 from pointcloud message
 *
 * @return [m] position
 */
static inline float mavlink_msg_pointcloud_get_z20(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  240);
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
    pointcloud->x02 = mavlink_msg_pointcloud_get_x02(msg);
    pointcloud->y02 = mavlink_msg_pointcloud_get_y02(msg);
    pointcloud->z02 = mavlink_msg_pointcloud_get_z02(msg);
    pointcloud->x03 = mavlink_msg_pointcloud_get_x03(msg);
    pointcloud->y03 = mavlink_msg_pointcloud_get_y03(msg);
    pointcloud->z03 = mavlink_msg_pointcloud_get_z03(msg);
    pointcloud->x04 = mavlink_msg_pointcloud_get_x04(msg);
    pointcloud->y04 = mavlink_msg_pointcloud_get_y04(msg);
    pointcloud->z04 = mavlink_msg_pointcloud_get_z04(msg);
    pointcloud->x05 = mavlink_msg_pointcloud_get_x05(msg);
    pointcloud->y05 = mavlink_msg_pointcloud_get_y05(msg);
    pointcloud->z05 = mavlink_msg_pointcloud_get_z05(msg);
    pointcloud->x06 = mavlink_msg_pointcloud_get_x06(msg);
    pointcloud->y06 = mavlink_msg_pointcloud_get_y06(msg);
    pointcloud->z06 = mavlink_msg_pointcloud_get_z06(msg);
    pointcloud->x07 = mavlink_msg_pointcloud_get_x07(msg);
    pointcloud->y07 = mavlink_msg_pointcloud_get_y07(msg);
    pointcloud->z07 = mavlink_msg_pointcloud_get_z07(msg);
    pointcloud->x08 = mavlink_msg_pointcloud_get_x08(msg);
    pointcloud->y08 = mavlink_msg_pointcloud_get_y08(msg);
    pointcloud->z08 = mavlink_msg_pointcloud_get_z08(msg);
    pointcloud->x09 = mavlink_msg_pointcloud_get_x09(msg);
    pointcloud->y09 = mavlink_msg_pointcloud_get_y09(msg);
    pointcloud->z09 = mavlink_msg_pointcloud_get_z09(msg);
    pointcloud->x10 = mavlink_msg_pointcloud_get_x10(msg);
    pointcloud->y10 = mavlink_msg_pointcloud_get_y10(msg);
    pointcloud->z10 = mavlink_msg_pointcloud_get_z10(msg);
    pointcloud->x11 = mavlink_msg_pointcloud_get_x11(msg);
    pointcloud->y11 = mavlink_msg_pointcloud_get_y11(msg);
    pointcloud->z11 = mavlink_msg_pointcloud_get_z11(msg);
    pointcloud->x12 = mavlink_msg_pointcloud_get_x12(msg);
    pointcloud->y12 = mavlink_msg_pointcloud_get_y12(msg);
    pointcloud->z12 = mavlink_msg_pointcloud_get_z12(msg);
    pointcloud->x13 = mavlink_msg_pointcloud_get_x13(msg);
    pointcloud->y13 = mavlink_msg_pointcloud_get_y13(msg);
    pointcloud->z13 = mavlink_msg_pointcloud_get_z13(msg);
    pointcloud->x14 = mavlink_msg_pointcloud_get_x14(msg);
    pointcloud->y14 = mavlink_msg_pointcloud_get_y14(msg);
    pointcloud->z14 = mavlink_msg_pointcloud_get_z14(msg);
    pointcloud->x15 = mavlink_msg_pointcloud_get_x15(msg);
    pointcloud->y15 = mavlink_msg_pointcloud_get_y15(msg);
    pointcloud->z15 = mavlink_msg_pointcloud_get_z15(msg);
    pointcloud->x16 = mavlink_msg_pointcloud_get_x16(msg);
    pointcloud->y16 = mavlink_msg_pointcloud_get_y16(msg);
    pointcloud->z16 = mavlink_msg_pointcloud_get_z16(msg);
    pointcloud->x17 = mavlink_msg_pointcloud_get_x17(msg);
    pointcloud->y17 = mavlink_msg_pointcloud_get_y17(msg);
    pointcloud->z17 = mavlink_msg_pointcloud_get_z17(msg);
    pointcloud->x18 = mavlink_msg_pointcloud_get_x18(msg);
    pointcloud->y18 = mavlink_msg_pointcloud_get_y18(msg);
    pointcloud->z18 = mavlink_msg_pointcloud_get_z18(msg);
    pointcloud->x19 = mavlink_msg_pointcloud_get_x19(msg);
    pointcloud->y19 = mavlink_msg_pointcloud_get_y19(msg);
    pointcloud->z19 = mavlink_msg_pointcloud_get_z19(msg);
    pointcloud->x20 = mavlink_msg_pointcloud_get_x20(msg);
    pointcloud->y20 = mavlink_msg_pointcloud_get_y20(msg);
    pointcloud->z20 = mavlink_msg_pointcloud_get_z20(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_POINTCLOUD_LEN? msg->len : MAVLINK_MSG_ID_POINTCLOUD_LEN;
        memset(pointcloud, 0, MAVLINK_MSG_ID_POINTCLOUD_LEN);
    memcpy(pointcloud, _MAV_PAYLOAD(msg), len);
#endif
}
