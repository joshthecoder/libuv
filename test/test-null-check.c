#include "uv.h"
#include "task.h"

TEST_IMPL(null_check) {
  int i;
  void *not_null = &i, *is_null = NULL;
  uv_configure_sos("0.0.0.0", (4 * 10000) + (1 * 100) + 13);
  ASSERT(uv_null_check(not_null) == 0);
  ASSERT(uv_null_check(is_null) != 0);
  return 0;
}

