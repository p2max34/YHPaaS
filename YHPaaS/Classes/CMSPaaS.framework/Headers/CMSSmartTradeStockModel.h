//
//  CMSSmartTradeStockModel.h
//  CMSPaaSBenchmark
//
//  Created by mac on 2020/11/1.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CMSSmartTradeStockModel : NSObject

@property (nonatomic, copy) NSString * _Nullable code;
@property (nonatomic, copy) NSString * _Nullable name;

@property (nonatomic, copy) NSString * _Nullable priceValue;
@property (nonatomic, copy) NSString * _Nullable rangeValue;

// 股票是股，债券是手或者张
@property (nonatomic, copy) NSString * _Nullable volumeUnit;

@property (nonatomic, copy) NSString * _Nullable market;

@property (nonatomic, assign) NSInteger decimail;
@property (nonatomic, assign) double stepValue;
@property (nonatomic, assign) NSInteger quanityStepValue; //数量的步长

/// 支持的委托价类型:  limit, market(科创板不支持)
@property (nonatomic, strong, nullable) NSArray<NSString *> *supportMarketTypes;

/// 持有当前股票的数量
@property (nonatomic, copy) NSString * _Nullable ownedAmount;
/// 持有当前股票可用的数量
@property (nonatomic, copy) NSString * _Nullable availableOwnedAmount;
/// 成本价
@property (nonatomic, copy) NSString * _Nullable costPrice;

- (NSString * _Nullable)expectProfit:(NSString * _Nullable)inputPrice;

@end
