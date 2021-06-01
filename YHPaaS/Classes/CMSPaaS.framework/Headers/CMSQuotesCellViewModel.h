//
//  CMSQuotesCellViewModel.h
//  CMSPaaS
//
//  Created by symbio on 2021/1/15.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesCellTemplateModel.h"
#import "CMSQuoteMarketStatisticsDataModel.h"
#import "CMSStockInfoMapView.h"
#import "CMSQuoteStockCollectionViewCell.h"
#import "CMSQuotesViewModel.h"
#import "CMSServicesManager.h"
#import <YYModel/YYModel.h>
#import "CMSThemeManager.h"
#import "EXTScope.h"
#import "CMSServicesManager.h"
#import "CMSStockQuotesBinder.h"
#import "CMSHuShenGangTongCapitalFlowView.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesCellViewModel : NSObject
/// cell当前配置信息
@property (nonatomic, strong) CMSQuotesCellTemplateModel     *model;
/// 更新当前cell内容
- (void)refreshData;
/// 通过参数名获取对应的value,用于配合解析更多
- (NSString *)getValueForParameterName:(NSString *)parameterName;

@end

NS_ASSUME_NONNULL_END

