/** @file
 *    @brief MAVLink comm protocol testsuite generated from pointcloud.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef POINTCLOUD_TESTSUITE_H
#define POINTCLOUD_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_pointcloud(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_pointcloud(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_pointcloud(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_POINTCLOUD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_pointcloud_t packet_in = {
        963497464,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0,381.0,409.0,437.0,465.0,493.0,521.0,549.0,577.0,605.0,633.0,661.0,689.0,717.0,745.0,773.0,801.0,829.0,857.0,885.0,913.0,941.0,969.0,997.0,1025.0,1053.0,1081.0,1109.0,1137.0,1165.0,1193.0,1221.0,1249.0,1277.0,1305.0,1333.0,1361.0,1389.0,1417.0,1445.0,1473.0,1501.0,1529.0,1557.0,1585.0,1613.0,1641.0,1669.0,1697.0,1725.0,1753.0,1781.0
    };
    mavlink_pointcloud_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.number = packet_in.number;
        packet1.x01 = packet_in.x01;
        packet1.y01 = packet_in.y01;
        packet1.z01 = packet_in.z01;
        packet1.x02 = packet_in.x02;
        packet1.y02 = packet_in.y02;
        packet1.z02 = packet_in.z02;
        packet1.x03 = packet_in.x03;
        packet1.y03 = packet_in.y03;
        packet1.z03 = packet_in.z03;
        packet1.x04 = packet_in.x04;
        packet1.y04 = packet_in.y04;
        packet1.z04 = packet_in.z04;
        packet1.x05 = packet_in.x05;
        packet1.y05 = packet_in.y05;
        packet1.z05 = packet_in.z05;
        packet1.x06 = packet_in.x06;
        packet1.y06 = packet_in.y06;
        packet1.z06 = packet_in.z06;
        packet1.x07 = packet_in.x07;
        packet1.y07 = packet_in.y07;
        packet1.z07 = packet_in.z07;
        packet1.x08 = packet_in.x08;
        packet1.y08 = packet_in.y08;
        packet1.z08 = packet_in.z08;
        packet1.x09 = packet_in.x09;
        packet1.y09 = packet_in.y09;
        packet1.z09 = packet_in.z09;
        packet1.x10 = packet_in.x10;
        packet1.y10 = packet_in.y10;
        packet1.z10 = packet_in.z10;
        packet1.x11 = packet_in.x11;
        packet1.y11 = packet_in.y11;
        packet1.z11 = packet_in.z11;
        packet1.x12 = packet_in.x12;
        packet1.y12 = packet_in.y12;
        packet1.z12 = packet_in.z12;
        packet1.x13 = packet_in.x13;
        packet1.y13 = packet_in.y13;
        packet1.z13 = packet_in.z13;
        packet1.x14 = packet_in.x14;
        packet1.y14 = packet_in.y14;
        packet1.z14 = packet_in.z14;
        packet1.x15 = packet_in.x15;
        packet1.y15 = packet_in.y15;
        packet1.z15 = packet_in.z15;
        packet1.x16 = packet_in.x16;
        packet1.y16 = packet_in.y16;
        packet1.z16 = packet_in.z16;
        packet1.x17 = packet_in.x17;
        packet1.y17 = packet_in.y17;
        packet1.z17 = packet_in.z17;
        packet1.x18 = packet_in.x18;
        packet1.y18 = packet_in.y18;
        packet1.z18 = packet_in.z18;
        packet1.x19 = packet_in.x19;
        packet1.y19 = packet_in.y19;
        packet1.z19 = packet_in.z19;
        packet1.x20 = packet_in.x20;
        packet1.y20 = packet_in.y20;
        packet1.z20 = packet_in.z20;
        packet1.x21 = packet_in.x21;
        packet1.y21 = packet_in.y21;
        packet1.z21 = packet_in.z21;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_POINTCLOUD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_pointcloud_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_pointcloud_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_pointcloud_pack(system_id, component_id, &msg , packet1.number , packet1.x01 , packet1.y01 , packet1.z01 , packet1.x02 , packet1.y02 , packet1.z02 , packet1.x03 , packet1.y03 , packet1.z03 , packet1.x04 , packet1.y04 , packet1.z04 , packet1.x05 , packet1.y05 , packet1.z05 , packet1.x06 , packet1.y06 , packet1.z06 , packet1.x07 , packet1.y07 , packet1.z07 , packet1.x08 , packet1.y08 , packet1.z08 , packet1.x09 , packet1.y09 , packet1.z09 , packet1.x10 , packet1.y10 , packet1.z10 , packet1.x11 , packet1.y11 , packet1.z11 , packet1.x12 , packet1.y12 , packet1.z12 , packet1.x13 , packet1.y13 , packet1.z13 , packet1.x14 , packet1.y14 , packet1.z14 , packet1.x15 , packet1.y15 , packet1.z15 , packet1.x16 , packet1.y16 , packet1.z16 , packet1.x17 , packet1.y17 , packet1.z17 , packet1.x18 , packet1.y18 , packet1.z18 , packet1.x19 , packet1.y19 , packet1.z19 , packet1.x20 , packet1.y20 , packet1.z20 , packet1.x21 , packet1.y21 , packet1.z21 );
    mavlink_msg_pointcloud_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_pointcloud_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.number , packet1.x01 , packet1.y01 , packet1.z01 , packet1.x02 , packet1.y02 , packet1.z02 , packet1.x03 , packet1.y03 , packet1.z03 , packet1.x04 , packet1.y04 , packet1.z04 , packet1.x05 , packet1.y05 , packet1.z05 , packet1.x06 , packet1.y06 , packet1.z06 , packet1.x07 , packet1.y07 , packet1.z07 , packet1.x08 , packet1.y08 , packet1.z08 , packet1.x09 , packet1.y09 , packet1.z09 , packet1.x10 , packet1.y10 , packet1.z10 , packet1.x11 , packet1.y11 , packet1.z11 , packet1.x12 , packet1.y12 , packet1.z12 , packet1.x13 , packet1.y13 , packet1.z13 , packet1.x14 , packet1.y14 , packet1.z14 , packet1.x15 , packet1.y15 , packet1.z15 , packet1.x16 , packet1.y16 , packet1.z16 , packet1.x17 , packet1.y17 , packet1.z17 , packet1.x18 , packet1.y18 , packet1.z18 , packet1.x19 , packet1.y19 , packet1.z19 , packet1.x20 , packet1.y20 , packet1.z20 , packet1.x21 , packet1.y21 , packet1.z21 );
    mavlink_msg_pointcloud_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_pointcloud_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_pointcloud_send(MAVLINK_COMM_1 , packet1.number , packet1.x01 , packet1.y01 , packet1.z01 , packet1.x02 , packet1.y02 , packet1.z02 , packet1.x03 , packet1.y03 , packet1.z03 , packet1.x04 , packet1.y04 , packet1.z04 , packet1.x05 , packet1.y05 , packet1.z05 , packet1.x06 , packet1.y06 , packet1.z06 , packet1.x07 , packet1.y07 , packet1.z07 , packet1.x08 , packet1.y08 , packet1.z08 , packet1.x09 , packet1.y09 , packet1.z09 , packet1.x10 , packet1.y10 , packet1.z10 , packet1.x11 , packet1.y11 , packet1.z11 , packet1.x12 , packet1.y12 , packet1.z12 , packet1.x13 , packet1.y13 , packet1.z13 , packet1.x14 , packet1.y14 , packet1.z14 , packet1.x15 , packet1.y15 , packet1.z15 , packet1.x16 , packet1.y16 , packet1.z16 , packet1.x17 , packet1.y17 , packet1.z17 , packet1.x18 , packet1.y18 , packet1.z18 , packet1.x19 , packet1.y19 , packet1.z19 , packet1.x20 , packet1.y20 , packet1.z20 , packet1.x21 , packet1.y21 , packet1.z21 );
    mavlink_msg_pointcloud_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("POINTCLOUD") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_POINTCLOUD) != NULL);
#endif
}

static void mavlink_test_pointcloud(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_pointcloud(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // POINTCLOUD_TESTSUITE_H
