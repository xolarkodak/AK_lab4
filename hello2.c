// SPDX-License-Identifier: GPL-2-Clause
#include <hello1.h>

MODULE_AUTHOR("IO-11 Kudelia Sasha\n");
MODULE_DESCRIPTION("My lab4\n");
MODULE_LICENSE("Dual BSD/GPL");

static uint chrono_counter = 1;

module_param(chrono_counter, uint, 0);
MODULE_PARM_DESC(chrono_counter, "Simple chrono counter for my lab\n");

static int __init init_hello(void)
{
pr_info("Success! hello2 has been initiated\n");
print_hello(chrono_counter);
return 0;
}

static void __exit exit_hello(void)
{
pr_info("Success! hello2 has been unloaded\n");
}

module_init(init_hello);
module_exit(exit_hello);