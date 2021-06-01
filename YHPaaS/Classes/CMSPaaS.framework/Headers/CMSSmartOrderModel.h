//
//  CMSSmartOrderModel.h
//  CMSPaaSBenchmark
//
//  Created by symbio on 2020/11/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderRowModel : NSObject
@property (nonatomic, copy) NSString *name;
/// 描述内容,类型为NSString 或者NSAttributedString
@property (nonatomic, strong) id desc;

@property (nonatomic, copy) NSArray<NSString *> *buttonTitles;
/// 是否是文本类型的cell
@property (nonatomic, assign) BOOL isTextCell;
@end

@interface CMSSmartOrderSectionModel : NSObject
@property (nonatomic, copy) NSArray<CMSSmartOrderRowModel *> *datas;
@property (nonatomic, copy) NSString *header;

@end

@interface CMSSmartOrderModel : NSObject
/// 名称
@property (nonatomic, copy) NSString *name;
/// id 或者代码
@property (nonatomic, copy) NSString *nameDesc;
/// 具体类型
@property (nonatomic, copy) NSString *type;
/// 状态
@property (nonatomic, copy) NSString *status;
/// 状态图片
@property (nonatomic, copy) NSString *statusImg;
/// 状态文本颜色
@property (nonatomic, strong) UIColor *statusColor;
/// 状态描述
@property (nonatomic, copy) NSString *statusDesc;

/// 详情数据
@property (nonatomic, copy) NSArray<CMSSmartOrderSectionModel *> *details;
@property (nonatomic, copy) NSArray<NSString *> *buttonTitles;
@property (nonatomic, copy) NSArray<NSString *> *detailButtonTitles;

/// 列表数据

/// 是否支持收放
@property (nonatomic, assign) BOOL isSupportClose;
/// 开启状态
@property (nonatomic, assign) BOOL isOpen;
@property (nonatomic, copy) NSArray<CMSSmartOrderRowModel *> *datas;

/// 存储原始数据
@property (nonatomic, strong) id originOrderData;

/// 列表中row的高度
@property (nonatomic, assign) CGFloat height;
/// 头部高度
@property (nonatomic, assign) CGFloat nomalHeight;
/// 内容总高度
@property (nonatomic, assign) CGFloat totalHeight;

@end

NS_ASSUME_NONNULL_END
