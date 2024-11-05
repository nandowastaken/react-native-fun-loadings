#ifdef __cplusplus
#import "react-native-fun-loadings.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNFunLoadingsSpec.h"

@interface FunLoadings : NSObject <NativeFunLoadingsSpec>
#else
#import <React/RCTBridgeModule.h>

@interface FunLoadings : NSObject <RCTBridgeModule>
#endif

@end
