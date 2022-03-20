#include <linux/init.h>
#include <linux/module.h>
#include "simple_module.h"

// __init is kayword that marks that once initialized, function is no longer needed
// aka it frees RAM since keeping this function isn't necessary
__init int simple_module_init(void) {

	printk(KERN_ALERT "Inside the %s function\n", __FUNCTION__);
	return 0;
}


void simple_module_exit(void) {

	printk(KERN_ALERT "Inside the %s function\n", __FUNCTION__);
}

module_init(simple_module_init);
module_exit(simple_module_exit);



