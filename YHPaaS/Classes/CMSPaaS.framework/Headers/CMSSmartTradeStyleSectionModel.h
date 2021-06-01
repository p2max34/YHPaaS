//
//  CMSSmartTradeStyleSectionModel.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/10/26.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,CMSSmartTradeOrderType) {
    CMSSmartTradeOrderTypeReBoundBuy = 0,
    CMSSmartTradeOrderTypeReBoundSale,
    CMSSmartTradeOrderTypeUpDownBuy,
    CMSSmartTradeOrderTypeUpDownSale,
    CMSSmartTradeOrderTypeOpenPlateSale,
};

@interface CMSSmartTradeStyleItemModel : NSObject

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *itemGroup;
@property (nonatomic, strong) id datas;
@property (nonatomic, copy) NSString *field;
/// 非配置属性
@property (nonatomic, copy, readonly) NSString *bindCellClassName;
@property (nonatomic, assign) CMSSmartTradeOrderType orderType;

@end

@interface CMSSmartTradeStyleSectionModel : NSObject

@property (nonatomic, strong) CMSSmartTradeStyleItemModel *title;
@property (nonatomic, copy) NSArray<CMSSmartTradeStyleItemModel *> *items;
/// 是否必填
@property (nonatomic, assign) BOOL necessary;

@end

@interface CMSSmartTradeStyleDealDirectionModel : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *value;

@end

@interface CMSSmartTradeStyleModel : NSObject

@property (nonatomic, copy) NSString *navgation_title;
@property (nonatomic, strong) CMSSmartTradeStyleDealDirectionModel *deal_direction;
@property (nonatomic, copy) NSArray<CMSSmartTradeStyleSectionModel *> *style;

@end
