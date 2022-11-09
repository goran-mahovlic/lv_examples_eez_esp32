/**
 * @file lv_demo_eez.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "../../lv_examples.h"
#include "lv_demo_eez.h"
//#include "screens.h"
//#include "images.h"
//#include "fonts.h"
//#include "actions.h"

#if LV_USE_DEMO_EEZ

objects_t objects;
lv_obj_t * obj;

void create_screen_main(void);

void lv_demo_eez(void)
{
  create_screen_main();
  lv_disp_load_scr(obj);
}

void create_screen_main() {
    obj = lv_obj_create(0, NULL);
    objects.main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 320, 240);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_label_create(parent_obj, NULL);
            lv_obj_set_pos(obj, 116, 129);
            lv_obj_set_size(obj, 168, 16);
            lv_label_set_text(obj, "Hello, world!");
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj, NULL);
            lv_obj_set_pos(obj, 76, 104);
            lv_obj_set_size(obj, 89, 16);
            lv_label_set_text(obj, "EEZ Studio ESP32 LVGL");
        }
    }
}

#endif
