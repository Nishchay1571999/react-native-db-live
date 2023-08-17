#ifdef __cplusplus
#import "react-native-db-live.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNDbLiveSpec.h"

@interface DbLive : NSObject <NativeDbLiveSpec>
#else
#import <React/RCTBridgeModule.h>

@interface DbLive : NSObject <RCTBridgeModule>
#endif

@end
