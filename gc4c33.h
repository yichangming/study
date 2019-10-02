/* gc5025_088_lib.h
 *
 *Copyright (c) 2017 Qualcomm Technologies, Inc.
 *All Rights Reserved.
 *Confidential and Proprietary - Qualcomm Technologies, Inc.
 */

#ifndef __GC5025_LIB_H__
#define __GC5025_LIB_H__

#include "sensor_lib.h"

#define SENSOR_MODEL "gc5025_p450a01_088"
#define MAX_ANALOG_GAIN 8

#define IMAGE_HV_MIRROR
/*
#define IMAGE_H_MIRROR
#define IMAGE_V_MIRROR
#define IMAGE_HV_MIRROR
*/
#ifdef IMAGE_NORMAL_MIRROR
#define MIRROR 0xc0
#define STARTY 0x02
#define STARTX 0x03
#endif

#ifdef IMAGE_H_MIRROR
#define MIRROR 0xc1
#define STARTY 0x02
#define STARTX 0x0d
#endif

#ifdef IMAGE_V_MIRROR
#define MIRROR 0xc2
#define STARTY 0x02
#define STARTX 0x03
#endif

#ifdef IMAGE_HV_MIRROR
#define MIRROR 0xc3
#define STARTY 0x02
#define STARTX 0x0d
#endif

#define ANALOG_GAIN_1 64
#define ANALOG_GAIN_2 92

#define START_REG_ARRAY \
{ \
  {0xfe, 0x00, 0x00}, \
  {0x3f, 0x91, 0x00}, \
  {0xfe, 0x00, 0x00}, \
}

#define STOP_REG_ARRAY \
{ \
  {0xfe, 0x00, 0x00}, \
  {0x3f, 0x01, 0x00}, \
  {0xfe, 0x00, 0x00}, \
}

#define GROUPON_REG_ARRAY \
{ \
  {0xfe, 0x00, 0x00}, \
}

#define GROUPOFF_REG_ARRAY \
{ \
  {0xfe, 0x00, 0x00}, \
}

#define INIT0_REG_ARRAY \
{  \
	{0xfe,0x00,0x00}, \
	{0xfe,0x00,0x00}, \
	{0xfe,0x00,0x00}, \
	{0xf7,0x01,0x00}, \
	{0xf8,0x10,0x00}, \
	{0xf9,0x00,0x00}, \
	{0xfa,0xa0,0x00}, \
	{0xfc,0x2a,0x00}, \
	{0xfe,0x03,0x00}, \
	{0x01,0x07,0x00}, \
	{0xfc,0x2e,0x00}, \
	{0xfe,0x00,0x00}, \
	{0x88,0x03,0x00}, \
	/* Cisctrl & Analog */ \
	{0x03,0x07,0x00}, \
	{0x04,0x08,0x00}, \
	{0x05,0x02,0x00}, \
	{0x06,0x58,0x00}, \
	{0x08,0x20,0x00}, \
	{0x0a,0x1c,0x00}, \
	{0x0c,0x04,0x00}, \
	{0x0d,0x07,0x00}, \
	{0x0e,0x9c,0x00}, \
	{0x0f,0x0a,0x00}, \
	{0x10,0x30,0x00}, \
	{0x17,MIRROR,0x00}, \
	{0x18,0x02,0x00}, \
	{0x19,0x17,0x00}, \
	{0x1a,0x1a,0x00}, \
	{0x1e,0x90,0x00}, \
	{0x1f,0xb0,0x00}, \
	{0x20,0x2b,0x00}, \
	{0x21,0x2b,0x00}, \
	{0x26,0x2b,0x00}, \
	{0x25,0xc1,0x00}, \
	{0x27,0x64,0x00}, \
	{0x28,0x00,0x00}, \
	{0x29,0x3f,0x00}, \
	{0x2b,0x80,0x00}, \
	{0x30,0x11,0x00}, \
	{0x31,0x20,0x00}, \
	{0x32,0xa0,0x00}, \
	{0x33,0x00,0x00}, \
	{0x34,0x55,0x00}, \
	{0x3a,0x00,0x00}, \
	{0x3b,0x00,0x00}, \
	{0x81,0x60,0x00}, \
	{0xcb,0x02,0x00}, \
	{0xcd,0x2d,0x00}, \
	{0xcf,0x50,0x00}, \
	{0xd0,0xb3,0x00}, \
	{0xd1,0x18,0x00}, \
	{0xd9,0xaa,0x00}, \
	{0xdc,0x03,0x00}, \
	{0xdd,0xaa,0x00}, \
	{0xe0,0x00,0x00}, \
	{0xe1,0x0a,0x00}, \
	{0xe3,0x2a,0x00}, \
	{0xe4,0xa0,0x00}, \
	{0xe5,0x06,0x00}, \
	{0xe6,0x10,0x00}, \
	{0xe7,0xc2,0x00}, \
	{0xfe,0x10,0x00}, \
	{0xfe,0x00,0x00}, \
	{0xfe,0x10,0x00}, \
	{0xfe,0x00,0x00}, \
	/* DR OFF */ \
	{0x1c,0x2c,0x00}, \
	{0x2f,0x4d,0x00}, \
	{0x38,0x04,0x00}, \
	{0x39,0x02,0x00}, \
	{0x3c,0x08,0x00}, \
	{0x3d,0x0f,0x00}, \
	{0xd3,0xc4,0x00}, \
	{0x43,0x08,0x00}, \
	{0x1d,0x00,0x00}, \
	/* ISP */ \
	{0x80,0x10,0x00}, \
	{0x89,0x03,0x00}, \
	{0xfe,0x01,0x00}, \
	{0x88,0xf7,0x00}, \
	{0x8a,0x03,0x00}, \
	{0x8e,0xc7,0x00}, \
	/* BLK */ \
	{0xfe,0x00,0x00}, \
	{0x40,0x22,0x00}, \
	{0x41,0x28,0x00}, \
	{0x42,0x04,0x00}, \
	{0x4e,0x0f,0x00}, \
	{0x4f,0xf0,0x00}, \
	{0x67,0x0c,0x00}, \
	{0xae,0x40,0x00}, \
	{0xaf,0x04,0x00}, \
	{0x60,0x00,0x00}, \
	{0x61,0x80,0x00}, \
	/* GAIN */ \
	{0xb0,0x58,0x00}, \
	{0xb1,0x01,0x00}, \
	{0xb2,0x00,0x00}, \
	{0xb6,0x00,0x00}, \
	/* CROP WINDOW */ \
	{0x91,0x00,0x00}, \
	{0x92,STARTY,0x00}, \
	{0x94,STARTX,0x00}, \
	/* MIPI */ \
	{0xfe,0x03,0x00}, \
	{0x02,0x05,0x00}, \
	{0x03,0x8e,0x00}, \
	{0x06,0x80,0x00}, \
	{0x15,0x00,0x00}, \
	{0x16,0x09,0x00}, \
	{0x18,0x0a,0x00}, \
	{0x21,0x10,0x00}, \
	{0x22,0x05,0x00}, \
	{0x23,0x20,0x00}, \
	{0x24,0x02,0x00}, \
	{0x25,0x20,0x00}, \
	{0x26,0x08,0x00}, \
	{0x29,0x06,0x00}, \
	{0x2a,0x0a,0x00}, \
	{0x2b,0x08,0x00}, \
	{0xfe,0x00,0x00}, \
}

#define RES0_REG_ARRAY \
{ \
	{0xfe,0x00,0x00}, \
}
// added by jidewei 20170918 for imx376 upscale
static sensor_lib_t sensor_lib_ptr;
/*static sensor_dimension_t gc5025_scale_size_tbl[] = {
  { 3264, 2448}, // 8MP
  { 3264, 1836},
  {3264,  1632},//18:9
  {2240,  2240},
};*/
/*===========================================================================
* FUNCTION	  - gc5025 get_scale_tbl -
*
* DESCRIPTION: Get scale size table
*==========================================================================*/
/*static int32_t gc5025_get_scale_tbl(sensor_dimension_t * tbl)
{
	int i;
	if(sensor_lib_ptr.scale_tbl_cnt == 0)
		return -1;
	for(i = 0; i < sensor_lib_ptr.scale_tbl_cnt; i++){
		tbl[i] = gc5025_scale_size_tbl[i];
	}
	return 0;
}
*/
static sensor_lib_t sensor_lib_ptr =
{
  .sensor_slave_info =
  {
    .sensor_name = SENSOR_MODEL,
    .slave_addr = 0x6e,
    .i2c_freq_mode = SENSOR_I2C_MODE_FAST,
    .addr_type = CAMERA_I2C_BYTE_ADDR,
    .sensor_id_info =
    {
      .sensor_id_reg_addr = 0xf0,
      .sensor_id = 0x5025,
    },
    .power_setting_array =
    {
      .power_setting_a =
      {
      {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_STANDBY,
          .config_val = GPIO_OUT_LOW,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_RESET,
          .config_val = GPIO_OUT_LOW,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_VREG,
          .seq_val = CAMERA_VIO,
          .config_val = 1,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_VDIG,
          .config_val = GPIO_OUT_HIGH,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_VREG,
          .seq_val = CAMERA_VDIG,
          .config_val = 0,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_VANA,
          .config_val = GPIO_OUT_HIGH,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_CLK,
          .seq_val = CAMERA_MCLK,
          .config_val = 24000000,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_STANDBY,
          .config_val = GPIO_OUT_HIGH,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_RESET,
          .config_val = GPIO_OUT_HIGH,
          .delay = 5,
        },
      },
      .size = 9,
      .power_down_setting_a =
      {
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_STANDBY,
          .config_val = GPIO_OUT_LOW,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_RESET,
          .config_val = GPIO_OUT_LOW,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_CLK,
          .seq_val = CAMERA_MCLK,
          .config_val = 0,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_VANA,
          .config_val = GPIO_OUT_LOW,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_GPIO,
          .seq_val = CAMERA_GPIO_VDIG,
          .config_val = GPIO_OUT_LOW,
          .delay = 1,
        },
        {
          .seq_type = CAMERA_POW_SEQ_VREG,
          .seq_val = CAMERA_VDIG,
          .config_val = 0,
          .delay = 5,
        },
        {
          .seq_type = CAMERA_POW_SEQ_VREG,
          .seq_val = CAMERA_VIO,
          .config_val = 0,
          .delay = 1,
        },
      },
      .size_down = 7,
    },
  },
  .sensor_output =
  {
    .output_format = SENSOR_BAYER,
    .connection_mode = SENSOR_MIPI_CSI,
    .raw_output = SENSOR_10_BIT_DIRECT,
    .filter_arrangement = SENSOR_BGGR,
  },
  .output_reg_addr =
  {
    .x_output = 0xff,
    .y_output = 0xff,
    .line_length_pclk = 0xff,
    .frame_length_lines = 0xff,
  },
  .exp_gain_info =
  {
    .coarse_int_time_addr = 0x03,
    .global_gain_addr = 0xb2,
    .vert_offset = 2,
  },
  .aec_info =
  {
    .min_gain = 1.0,
    .max_gain = 8.0,
    .max_analog_gain = 8.0,
	.max_linecount = 10143,
  },
  .sensor_num_frame_skip = 2,
  .sensor_num_HDR_frame_skip = 2,
  .sensor_max_pipeline_frame_delay = 2,
  .sensor_property =
  {
    .pix_size = 1.12,
    .sensing_method = SENSOR_SMETHOD_ONE_CHIP_COLOR_AREA_SENSOR,
    .crop_factor = 1.0,
  },
  .pixel_array_size_info =
  {
    .active_array_size =
    {
      .width = 2592,
      .height = 1944,
    },
    .left_dummy = 0,
    .right_dummy = 0,
    .top_dummy = 0,
    .bottom_dummy = 0,
  },
  .color_level_info =
  {
    .white_level = 1023,
    .r_pedestal = 64,
    .gr_pedestal = 64,
    .gb_pedestal = 64,
    .b_pedestal = 64,
  },
  .sensor_stream_info_array =
  {
    .sensor_stream_info =
    {
      {
        .vc_cfg_size = 1,
        .vc_cfg =
        {
          {
            .cid = 0,
            .dt = CSI_RAW10,
            .decode_format = CSI_DECODE_10BIT,
          },
        },
        .pix_data_fmt =
        {
          SENSOR_BAYER,
        },
      },
    },
    .size = 1,
  },
  .start_settings =
  {
    .reg_setting_a = START_REG_ARRAY,
    .addr_type = CAMERA_I2C_BYTE_ADDR,
    .data_type = CAMERA_I2C_BYTE_DATA,
    .delay = 0,
  },
  .stop_settings =
  {
    .reg_setting_a = STOP_REG_ARRAY,
    .addr_type = CAMERA_I2C_BYTE_ADDR,
    .data_type = CAMERA_I2C_BYTE_DATA,
    .delay = 0,
  },
  .groupon_settings =
  {
    .reg_setting_a = GROUPON_REG_ARRAY,
    .addr_type = CAMERA_I2C_BYTE_ADDR,
    .data_type = CAMERA_I2C_BYTE_DATA,
    .delay = 0,
  },
  .groupoff_settings =
  {
    .reg_setting_a = GROUPOFF_REG_ARRAY,
    .addr_type = CAMERA_I2C_BYTE_ADDR,
    .data_type = CAMERA_I2C_BYTE_DATA,
    .delay = 0,
  },
  .embedded_data_enable_settings =
  {
    .reg_setting_a = {},
    .addr_type = 0,
    .data_type = 0,
    .delay = 0,
  },
  .embedded_data_disable_settings =
  {
    .reg_setting_a = {},
    .addr_type = 0,
    .data_type = 0,
    .delay = 0,
  },
  .init_settings_array =
  {
    .reg_settings =
    {
      {
        .reg_setting_a = INIT0_REG_ARRAY,
        .addr_type = CAMERA_I2C_BYTE_ADDR,
        .data_type = CAMERA_I2C_BYTE_DATA,
        .delay = 60,
      },
    },
    .size = 1,
  },
  .res_settings_array =
  {
    .reg_settings =
    {
      /* Res 0 */
      {
        .reg_setting_a = RES0_REG_ARRAY,
        .addr_type = CAMERA_I2C_BYTE_ADDR,
        .data_type = CAMERA_I2C_BYTE_DATA,
        .delay = 0,
      },

    },
    .size = 1,
  },
  .out_info_array =
  {
    .out_info =
    {
      /* For SNAPSHOT */
      {
        .x_output = 2592,
        .y_output = 1944,
        .line_length_pclk = 4800,
        .frame_length_lines = 1888,
        .vt_pixel_clk = 272000000,
        .op_pixel_clk = 204000000,
        .binning_factor = 1,
        .min_fps = 7.5,
        .max_fps = 30.0,
        .mode = SENSOR_DEFAULT_MODE,
        .offset_x = 0,
        .offset_y = 0,
        .scale_factor = 0,
      },

    },
    .size = 1,
  },
  .csi_params =
  {
    .lane_cnt = 2,
    .settle_cnt = 0x14,
    .is_csi_3phase = 0,
  },
  .csid_lut_params_array =
  {
    .lut_params =
    {
      /* Res 0 */
      {
        .num_cid = 1,
        .vc_cfg_a =
        {
          {
            .cid = 0,
            .dt = CSI_RAW10,
            .decode_format = CSI_DECODE_10BIT
          },
        },
      },
    },
    .size = 1,
  },
  // added by jidewei 20170918 for imx376 upscale
/* scale size table count*/
  /*.scale_tbl_cnt = ARRAY_SIZE(gc5025_scale_size_tbl),*/
/*function to get scale size tbl */
  /*.get_scale_tbl = gc5025_get_scale_tbl,*/
  .crop_params_array =
  {
    .crop_params =
    {
      /* Res 0 */
      {
        .top_crop = 0,
        .bottom_crop = 0,
        .left_crop = 0,
        .right_crop = 0,
      },
    },
    .size = 1,
  },
  .exposure_func_table =
  {
    .sensor_calculate_exposure = sensor_calculate_exposure,
    .sensor_fill_exposure_array = sensor_fill_exposure_array,
  },
  .meta_data_out_info_array =
  {
    .meta_data_out_info =
    {
      {
        .width = 0,
        .height = 0,
        .stats_type = 0,
      },
    },
    .size = 0,
  },
  .rolloff_config =
  {
    .enable = FALSE,
    .full_size_info =
    {
      .full_size_width = 0,
      .full_size_height = 0,
      .full_size_left_crop = 0,
      .full_size_top_crop = 0,
    },
  },
  .adc_readout_time = 0,
  .app_delay = {
    [SENSOR_DELAY_EXPOSURE] = 0,
    [SENSOR_DELAY_ANALOG_SENSOR_GAIN] = 0,
    [SENSOR_DELAY_DIGITAL_SENSOR_GAIN] = 0,

  },
  .noise_coeff = {
    .gradient_S = 3.738032e-06,
    .offset_S = 3.651935e-04,
    .gradient_O = 6.396835e-11,
    .offset_O = -2.968624e-04,
  },
};

#endif /* __gc5025_LIB_H__ */
