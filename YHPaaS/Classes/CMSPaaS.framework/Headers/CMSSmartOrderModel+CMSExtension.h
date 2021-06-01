//
//  CMSSmartOrderModel+CMSExtension.h
//  CMSPaaSBenchmark
//
//  Created by symbio on 2020/11/25.
//

#import <Foundation/Foundation.h>
#import "CMSSmartTradeOrderModel.h"
#import "CMSSmartOrderModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderModel (CMSExtension)
+ (NSArray<CMSSmartOrderModel *> *)conversionModels:(NSArray<CMSSmartTradeOrderModel *> *)models;
+ (CMSSmartOrderModel *)conversionModel:(CMSSmartTradeOrderModel *)model;
+ (CMSSmartOrderSectionModel *)getAdvancedSettingInfoWithModel:(CMSSmartTradeOrderModel *)model;

@end

NS_ASSUME_NONNULL_END
