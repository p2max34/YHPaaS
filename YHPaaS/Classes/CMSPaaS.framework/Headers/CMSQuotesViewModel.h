//
//  CMSQuotesViewModel.h
//  CMSPaaS
//
//  Created by HJ on 2020/12/30.
//

#import <Foundation/Foundation.h>
#import "CMSTableViewOC.h"
#import "CMSQuotesCellTemplateModel.h"
#import "CMSQuotesCellViewModel.h"

#import "CMSQuotesPageModel.h"


NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesViewModel : NSObject

/// 当前选中的外层类型模型
@property (nonatomic, strong) CMSQuotesPageModel     *pageModel;
/// 列表数据源
@property (nonatomic, strong) NSArray<CMSTableSectionModelOC *> *dataSource;
/// 是否显示顶部视图
@property (nonatomic, assign, readonly) BOOL              isShowTopView;
- (void)refreshData;
@end
@class CMSQuotesCellViewModel;
@interface CMSQuotesViewModel (CMSExtension)
/// 根据当前配置提取对应的组件名
+ (NSString *)getComponentWithTemplateModel:(CMSQuotesCellTemplateModel *)model;
+ (NSArray<CMSQuotesCellViewModel *> *)getViewModelListWithTemplateModels:(NSArray<CMSQuotesCellTemplateModel *> *)templateModels;
@end
NS_ASSUME_NONNULL_END




