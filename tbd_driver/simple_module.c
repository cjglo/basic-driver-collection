#include <linux/init.h>
#include <linux/module.h>
#include "simple_module.h"

// printk would appear in real terminal, but terminals application
// is not the same.  These will be in jounral (can see with `journalctl -f`)

int simple_module_init(void) {

	printk(KERN_ALERT "Inside the %s function\n", __FUNCTION__);
	return 0;
}

void simple_module_exit(void) {

	printk(KERN_ALERT "Inside the %s function\n", __FUNCTION__);
}

// names are exactly what they sound like;
// 1 that run at kernel compile or module load
// 1 that runs when done 
module_init(simple_module_init);
module_exit(simple_module_exit);



