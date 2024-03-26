#ifndef _HAM_BO_SUNG_H
#define _HAM_BO_SUNG_H
void ssd1306_init();
void task_ssd1306_display_text(const void *arg_text);
void task_ssd1306_display_clear();
#endif