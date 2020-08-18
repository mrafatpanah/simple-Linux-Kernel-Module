#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

// kernel module information
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mohammad Rafatpanah");
MODULE_DESCRIPTION("TEST LINUX KERNEL MODULE!");
MODULE_VERSION("0.1");
// end

static int __init start(void)
{
    printk(KERN_ALERT "Loading test module...\n");
    printk(KERN_INFO "Hello this is test from mohammad");
    return 0;
}

static void __exit end(void)
{
    printk(KERN_INFO "kernel module unloaded successfully !!!");
}

module_init(start);
module_exit(end);
