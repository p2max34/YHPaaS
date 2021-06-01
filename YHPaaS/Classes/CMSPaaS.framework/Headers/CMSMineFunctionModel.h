//
//  CMSMineFunctionModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/5.
//

#import <Foundation/Foundation.h>
#import "CMSMineFunctionModelProtocol.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSMineFunctionModel : NSObject <CMSMineFunctionModelProtocol>

@property (nonatomic, copy) NSString *icon; // ".png",
@property (nonatomic, copy) NSString *title; // "智能下单",
@property (nonatomic, copy) NSString *tagIcon; // "",
@property (nonatomic, copy) NSString *subTitle; // "创建智能委托，预约交易下单",
@property (nonatomic, copy) NSString *details; // "监控中",
@property (nonatomic, copy) NSString *subDetails; // "${mine?type=znxdAmount}",
@property (nonatomic, copy) NSString *uri; // ""

@end

NS_ASSUME_NONNULL_END
