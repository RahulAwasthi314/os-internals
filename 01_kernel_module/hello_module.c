#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

int simple_init(void) {
	printk(KERN_INFO "Loading Custom Module in Kernel...\n");
	return 0;
}

void simple_exit(void) {
	printk(KERN_INFO, "Removing Custom Module from Kernel...\n");
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello Module");
MODULE_AUTHOR("rahul awasthi");

