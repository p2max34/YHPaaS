//
//  CMSHuShenGangTongCapitalFlowViewModel.h
//  CMSPaaS
//
//  Created by sway on 2021/2/26.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesCellViewModel.h"
#import "CMSHuShenGangTongCapitalFlowView.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSHuShenGangTongCapitalFlowViewModel : CMSQuotesCellViewModel
@property (nonatomic, strong) NSArray <CMSHuShenGangTongCapitalFlowItem*> *capitalFlows;
//数据更新日期
@property (nonatomic, strong) NSString  *subTitle;
//获取沪深港通数据
- (void)getHuShenGangTongCapitalFlowsData;

@end

NS_ASSUME_NONNULL_END
