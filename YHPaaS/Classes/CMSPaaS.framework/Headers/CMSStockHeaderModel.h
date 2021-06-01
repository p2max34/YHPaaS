//
//  CMSStockHeaderModel.h
//  CMSPaaS
//
//  Created by SJ on 2021/1/28.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CMSStockHeaderPropertyModel : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *valueType;
@property (nonatomic, copy) NSString *colorType;
@property (nonatomic, copy) NSString *unit;
@end


@interface CMSStockHeaderModel : NSObject

@property (nonatomic, strong) CMSStockHeaderPropertyModel *propertyModel;
@property (nonatomic, copy) NSString *subProperty;
@property (nonatomic, copy) NSString *property;
@property (nonatomic, assign) BOOL show;
@property (nonatomic, assign) BOOL noSort;   //配置文件设置了该属性为true则该property不显示排序
@property (nonatomic, assign) BOOL showBackground;
/// 是否可以编辑, yes 不可以编辑, no可以编辑
@property (nonatomic, assign) BOOL fixed;
@property (nonatomic, assign) CGFloat width;

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *key;
@end

