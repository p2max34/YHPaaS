//
//  CMSQuotesConfigViewModel.h
//  CMSPaaS
//
//  Created by symbio on 2021/2/5.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesPageModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesConfigViewModel : NSObject

+ (instancetype)sharedInstance;

/// 所有列表数据
@property (nonatomic, strong) NSArray<CMSQuotesPageModel *> * allPageList;

/// 真实选中列表
@property (nonatomic, strong) NSArray<CMSQuotesPageModel *> *pageSelects;

/// 需要展示的选中的页面
@property (nonatomic, strong, readonly) NSArray<CMSQuotesPageModel *> *showSelectPages;

/// 组装后的行情配置列表
@property (nonatomic, strong, readonly) NSArray<NSArray<CMSQuotesPageModel *> *> *quotesConfigTypes;
/// 重置选中列表
- (NSArray<CMSQuotesPageModel *> *)resetPageSelects;

/// 数据加载
- (void)loadData;

/// 顶部标题列表
@property (nonatomic, strong) NSArray<NSString *> *headerTitles;

/// 第一组列数
@property (nonatomic, assign) NSInteger topColumnCount;
/// 第一组item高度
@property (nonatomic, assign) double topItemHeight;

/// 第二组列数
@property (nonatomic, assign) NSInteger bottomColumnCount;
/// 第二组item高度
@property (nonatomic, assign) double bottomItemHeight;

/// 左右边距
@property (nonatomic, assign) double margin;
/// 左右间距
@property (nonatomic, assign) double interitemSpacing;
/// 上下间距
@property (nonatomic, assign) double lineSpacing;

/// 头部高度
@property (nonatomic, assign) double headerHeight;
@end

NS_ASSUME_NONNULL_END




