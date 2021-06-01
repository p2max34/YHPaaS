//
//  CMSAHStock.h
//  CMSPaaS
//
//  Created by SJ on 2021/4/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface CMSAHPremiumStock : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *code;
@property (nonatomic, copy) NSString *setCode;

@property (nonatomic, strong) NSNumber *current; 
@property (nonatomic, strong) NSNumber *change; // 涨跌
@property (nonatomic, strong) NSNumber *changeRate; // 涨幅
@property (nonatomic, strong) NSNumber *HCurrent; // H股
@property (nonatomic, strong) NSNumber *HChangeRate; // H股幅度
@property (nonatomic, strong) NSNumber *premium; // 溢价(H/A)
@property (nonatomic, strong) NSNumber *premiumRate; // 溢价率


@end

NS_ASSUME_NONNULL_END
