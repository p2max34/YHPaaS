//
//  CMSTradePageViewModelProtocol.h
//  CMSPaaS
//
//  Created by SJ on 2021/1/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CMSTradePageViewModelProtocol <NSObject>

- (void)getTradePageList:(nonnull void (^)(NSArray<id<CMSTradePageViewModelProtocol>> * _Nonnull))complete;

@end

NS_ASSUME_NONNULL_END
