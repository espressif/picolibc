#!/usr/bin/env python3
"""
Script to generate remaining pthread stub implementations
"""

import os

# Define the remaining pthread functions to create
pthread_stubs = {
    # Mutexattr functions
    'pthread_mutexattr_getprioceiling': '(const pthread_mutexattr_t *attr, int *prioceiling)',
    'pthread_mutexattr_setprioceiling': '(pthread_mutexattr_t *attr, int prioceiling)',
    'pthread_mutexattr_getprotocol': '(const pthread_mutexattr_t *attr, int *protocol)',
    'pthread_mutexattr_setprotocol': '(pthread_mutexattr_t *attr, int protocol)',
    'pthread_mutexattr_getpshared': '(const pthread_mutexattr_t *attr, int *pshared)',
    'pthread_mutexattr_setpshared': '(pthread_mutexattr_t *attr, int pshared)',
    'pthread_mutexattr_gettype': '(const pthread_mutexattr_t *attr, int *type)',
    'pthread_mutexattr_settype': '(pthread_mutexattr_t *attr, int type)',

    # Cond functions
    'pthread_cond_init': '(pthread_cond_t *cond, const pthread_condattr_t *attr)',
    'pthread_cond_destroy': '(pthread_cond_t *cond)',
    'pthread_cond_wait': '(pthread_cond_t *cond, pthread_mutex_t *mutex)',
    'pthread_cond_timedwait': '(pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec *abstime)',
    'pthread_cond_clockwait': '(pthread_cond_t *cond, pthread_mutex_t *mutex, clockid_t clockid, const struct timespec *abstime)',
    'pthread_cond_signal': '(pthread_cond_t *cond)',
    'pthread_cond_broadcast': '(pthread_cond_t *cond)',

    # Condattr functions
    'pthread_condattr_init': '(pthread_condattr_t *attr)',
    'pthread_condattr_destroy': '(pthread_condattr_t *attr)',
    'pthread_condattr_getpshared': '(const pthread_condattr_t *attr, int *pshared)',
    'pthread_condattr_setpshared': '(pthread_condattr_t *attr, int pshared)',
    'pthread_condattr_getclock': '(const pthread_condattr_t *attr, clockid_t *clock_id)',
    'pthread_condattr_setclock': '(pthread_condattr_t *attr, clockid_t clock_id)',

    # Rwlock functions
    'pthread_rwlock_init': '(pthread_rwlock_t *rwlock, const pthread_rwlockattr_t *attr)',
    'pthread_rwlock_destroy': '(pthread_rwlock_t *rwlock)',
    'pthread_rwlock_rdlock': '(pthread_rwlock_t *rwlock)',
    'pthread_rwlock_tryrdlock': '(pthread_rwlock_t *rwlock)',
    'pthread_rwlock_timedrdlock': '(pthread_rwlock_t *rwlock, const struct timespec *abstime)',
    'pthread_rwlock_clockrdlock': '(pthread_rwlock_t *rwlock, clockid_t clockid, const struct timespec *abstime)',
    'pthread_rwlock_wrlock': '(pthread_rwlock_t *rwlock)',
    'pthread_rwlock_trywrlock': '(pthread_rwlock_t *rwlock)',
    'pthread_rwlock_timedwrlock': '(pthread_rwlock_t *rwlock, const struct timespec *abstime)',
    'pthread_rwlock_clockwrlock': '(pthread_rwlock_t *rwlock, clockid_t clockid, const struct timespec *abstime)',
    'pthread_rwlock_unlock': '(pthread_rwlock_t *rwlock)',

    # Rwlockattr functions
    'pthread_rwlockattr_init': '(pthread_rwlockattr_t *attr)',
    'pthread_rwlockattr_destroy': '(pthread_rwlockattr_t *attr)',
    'pthread_rwlockattr_getpshared': '(const pthread_rwlockattr_t *attr, int *pshared)',
    'pthread_rwlockattr_setpshared': '(pthread_rwlockattr_t *attr, int pshared)',

    # Barrier functions
    'pthread_barrier_init': '(pthread_barrier_t *barrier, const pthread_barrierattr_t *attr, unsigned count)',
    'pthread_barrier_destroy': '(pthread_barrier_t *barrier)',
    'pthread_barrier_wait': '(pthread_barrier_t *barrier)',

    # Barrierattr functions
    'pthread_barrierattr_init': '(pthread_barrierattr_t *attr)',
    'pthread_barrierattr_destroy': '(pthread_barrierattr_t *attr)',
    'pthread_barrierattr_getpshared': '(const pthread_barrierattr_t *attr, int *pshared)',
    'pthread_barrierattr_setpshared': '(pthread_barrierattr_t *attr, int pshared)',

    # Spinlock functions
    'pthread_spin_init': '(pthread_spinlock_t *lock, int pshared)',
    'pthread_spin_destroy': '(pthread_spinlock_t *lock)',
    'pthread_spin_lock': '(pthread_spinlock_t *lock)',
    'pthread_spin_trylock': '(pthread_spinlock_t *lock)',
    'pthread_spin_unlock': '(pthread_spinlock_t *lock)',

    # Key functions
    'pthread_key_create': '(pthread_key_t *key, void (*destructor)(void*))',
    'pthread_key_delete': '(pthread_key_t key)',
    'pthread_setspecific': '(pthread_key_t key, const void *value)',
    'pthread_getspecific': '(pthread_key_t key)',

    # Once
    'pthread_once': '(pthread_once_t *once_control, void (*init_routine)(void))',

    # Scheduling
    'pthread_setschedparam': '(pthread_t thread, int policy, const struct sched_param *param)',
    'pthread_getschedparam': '(pthread_t thread, int *policy, struct sched_param *param)',
    'pthread_setschedprio': '(pthread_t thread, int prio)',

    # Cancel
    'pthread_setcancelstate': '(int state, int *oldstate)',
    'pthread_setcanceltype': '(int type, int *oldtype)',
    'pthread_testcancel': '(void)',

    # Cleanup - special handling needed
    '_pthread_cleanup_push': '(struct _pthread_cleanup_context *context, void (*routine)(void *), void *arg)',
    '_pthread_cleanup_pop': '(struct _pthread_cleanup_context *context, int execute)',
    '_pthread_cleanup_push_defer': '(struct _pthread_cleanup_context *context, void (*routine)(void *), void *arg)',
    '_pthread_cleanup_pop_restore': '(struct _pthread_cleanup_context *context, int execute)',

    # Concurrency
    'pthread_getconcurrency': '(void)',
    'pthread_setconcurrency': '(int new_level)',

    # Other
    'pthread_getcpuclockid': '(pthread_t thread, clockid_t *clock_id)',
    'pthread_getaffinity_np': '(pthread_t thread, size_t cpusetsize, void *cpuset)',
    'pthread_setaffinity_np': '(pthread_t thread, size_t cpusetsize, const void *cpuset)',
    'pthread_getattr_np': '(pthread_t thread, pthread_attr_t *attr)',
    'pthread_getname_np': '(pthread_t thread, char *name, size_t len)',
    'pthread_setname_np': '(pthread_t thread, const char *name)',
    'pthread_yield': '(void)',
}

# Special return types
special_returns = {
    'pthread_getspecific': ('void *', 'return NULL;'),
    'pthread_getconcurrency': ('int', 'return 0;'),
    'pthread_testcancel': ('void', 'return;'),
    'pthread_yield': ('int', 'errno = ENOSYS; return ENOSYS;'),
    '_pthread_cleanup_push': ('void', 'return;'),
    '_pthread_cleanup_pop': ('void', 'return;'),
    '_pthread_cleanup_push_defer': ('void', 'return;'),
    '_pthread_cleanup_pop_restore': ('void', 'return;'),
}

def make_stub(func_name, params):
    return_type, return_stmt = special_returns.get(func_name, ('int', 'errno = ENOSYS; return ENOSYS;'))

    # Mark all parameters as unused
    params_with_unused = []
    for param in params.strip('()').split(','):
        param = param.strip()
        if param and param != 'void':
            # Extract parameter name (last identifier)
            parts = param.split()
            if len(parts) >= 2:
                # Handle function pointers
                if '(*' in param:
                    params_with_unused.append(f"{param} __attribute__((unused))")
                else:
                    # Regular parameter
                    param_name = parts[-1].strip('*')
                    param_type = ' '.join(parts[:-1])
                    params_with_unused.append(f"{param_type} {param_name} __attribute__((unused))")
            else:
                params_with_unused.append(f"{param} __attribute__((unused))")

    if params_with_unused:
        formatted_params = ',\n               '.join(params_with_unused)
    else:
        formatted_params = 'void'

    content = f"""/*
 * Stub version of {func_name}.
 */

#include <pthread.h>
#include <errno.h>
#include "warning.h"

__attribute__((weak))
{return_type}
{func_name}({formatted_params})
{{
  {return_stmt}
}}

stub_warning({func_name})
"""
    return content

# Generate all files
for func_name, params in pthread_stubs.items():
    filename = f"{func_name}.c"
    content = make_stub(func_name, params)
    with open(filename, 'w') as f:
        f.write(content)
    print(f"Created {filename}")

print(f"\nGenerated {len(pthread_stubs)} pthread stub files!")

