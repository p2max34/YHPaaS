//
//  CMSQuotesMainInflowsBlockModel.h
//  CMSPaaS
//
//  Created by HJ on 2021/3/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesMainInflowsBlockModel : NSObject
/// 主力流入模块名称 （化纤，证券）
@property (nonatomic, copy) NSString *name;
/// 主力流入模块数量 （1.79，0.03） 单位 亿
@property (nonatomic, assign) double value;
@end

NS_ASSUME_NONNULL_END
