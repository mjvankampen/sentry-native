#include "sentry.h"

static void
load_modules(void)
{
}

sentry_value_t
sentry_get_modules_list(void)
{
    return sentry_value_new_list();
}

void
sentry_clear_modulecache(void)
{
}
