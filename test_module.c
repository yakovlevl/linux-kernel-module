#include <linux/module.h>
#include <linux/init.h>

/* Meta */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Leonid Iakovlev");
MODULE_DESCRIPTION("Test module");

/**
* @brief This function is called, when the module is loaded into kernel
*/
static int __init ModuleInit(void) {
    printk("Init kernel\n");
    return 0;
}

/**
* @brief This function is called, when the module is remove from the kernel
*/
static void __exit ModuleExit(void) {
    printk("Remove kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);