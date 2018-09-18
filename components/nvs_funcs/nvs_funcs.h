/*
 * nvs_funcs.h
 *
 *  Created on: 13 Sep 2018
 *      Author: gal
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <keyboard_config.h>

#ifndef NVS_FUNCS_H_
#define NVS_FUNCS_H_

#define NVS_CONFIG_OK 1
#define NVS_CONFIG_ERR 0

#ifdef __cplusplus
extern "C" {
#endif

/*
 * @add a layout to nvs flash or overwrite existing one
 */
void nvs_write_layout(uint16_t layout[MATRIX_ROWS][KEYMAP_COLS],const char* layout_name);

/*
 * @brief read keyboard configuration from nvs flash
 */
void nvs_read_keymap_cfg(void);

/*
 * @brief write keyboard configuration to nvs flash
 */
void nvs_write_keymap_cfg(uint8_t layers, char (*layer_names)[MAX_LAYOUT_NAME_LENGTH]);


/*
 * @brief check if there is a saved keyboard configuration in nvs flash
 * if no configuration is found load default configuration
  */
uint8_t nvs_check_keymap_cfg(void);

#ifdef __cplusplus
}
#endif

#endif /* NVS_FUNCS_H_ */
