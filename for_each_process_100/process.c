#include <linux/module.h>
#include <linux/init.h>
#include <linux/delay.h>
#include <linux/fs.h>
#include <linux/sched.h>


static __init int char_dev_init(void)
{
	int i=0;
	struct task_struct *task;
	printk("hello kernel!\n");
	for_each_process(task){
		printk(KERN_ERR"%s[%d]\n",task->comm,task->pid);
		if(++i==100)
			break;
	}
	return 0;
}

static __exit void char_dev_exit(void)
{
	printk("goodbye kernlr!\n");
}

module_init(char_dev_init);
module_exit(char_dev_exit);
MODULE_LICENSE("GPL");

