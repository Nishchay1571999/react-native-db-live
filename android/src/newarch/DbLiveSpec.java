package com.dblive;

import com.facebook.react.bridge.ReactApplicationContext;

abstract class DbLiveSpec extends NativeDbLiveSpec {
  DbLiveSpec(ReactApplicationContext context) {
    super(context);
  }
}
