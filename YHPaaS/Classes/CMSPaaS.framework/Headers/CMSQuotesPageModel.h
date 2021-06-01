//
//  CMSQuotesPageModel.h
//  CMSPaaS
//
//  Created by HJ on 2020/12/30.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesCellTemplateModel.h"

//@class CMSQuotesCellTemplateModel;

@interface CMSQuotesSectionTabModel : NSObject
@property (nonatomic, copy) NSString *title;
/// section标签列表
@property (nonatomic, strong) NSArray<CMSQuotesCellTemplateModel *> *items;
@end

@interface CMSQuotesSectionModel : NSObject
/// 选中下标
@property (nonatomic, assign) NSInteger selectIndex;
/// section标签列表
@property (nonatomic, strong) NSArray<CMSQuotesSectionTabModel *> *sectionTabs;
@end

@interface CMSQuotesTabModel : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *remotePath;
@property (nonatomic, copy) NSString *defaultPath;
@property (nonatomic, assign) BOOL defaultSelected;
/// section列表
@property (nonatomic, strong) NSArray<CMSQuotesSectionModel *> *sections;
@end

@interface CMSQuotesPageModel : NSObject
@property (nonatomic, copy) NSString *title;
/// 用于行情页面配置的唯一标识
@property (nonatomic, copy) NSString *identifier;
/// 标签列表
@property (nonatomic, strong) NSArray<CMSQuotesTabModel *> *tabs;
/// 选中下标
@property (nonatomic, assign) NSInteger selectIndex;
/// 代表是否默认选中,一个列表中仅支持一个
@property (nonatomic, assign) BOOL defaultSelected;
/// 代表是否固定,一个列表中仅支持一个
@property (nonatomic, assign) BOOL fixed;
@end
