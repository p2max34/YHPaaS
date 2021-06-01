//
//  CMSQuotesCustomModuleViewModel.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/2/22.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesPageModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface QuotesCustomModel : NSObject
@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSString *customLeftImage;
@property (nonatomic, copy) NSString *customIdentifier;
@end

@interface CMSQuotesCustomModuleViewModel : NSObject

/// 所有列表数据
@property (nonatomic, strong) NSArray<NSString *> *allQuotesCustomList;
/// 重置列表
- (NSArray<NSString *> *)resetQuotesCustomList;

@property (nonatomic, strong) CMSQuotesPageModel     *pageModel;

- (instancetype)initWithPageModel:(CMSQuotesPageModel *)pageModel;

/// 数据加载
- (void)loadData;

/// 更新本地保存的数据
/// @param list 数据
- (BOOL)updateDataWithList:(NSArray<NSString *> *)list;

- (NSArray<CMSQuotesCellTemplateModel *> *)getHomePageJsonList;

@end

NS_ASSUME_NONNULL_END
