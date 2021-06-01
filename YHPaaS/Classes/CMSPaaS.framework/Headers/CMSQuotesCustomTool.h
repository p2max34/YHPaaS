//
//  CMSQuotesCustomTool.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/2/22.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesCustomModuleViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesCustomTool : NSObject
/// 更新自选A股自定义模块列表
+ (BOOL)updateQuotesCustomList:(NSArray<NSString *> *)list;
/// 自选A股自定义模块当前列表
+ (NSArray<NSString *> *)quotesCustomList;

///// 更新自定义模块配置文件列表
//+ (BOOL)updateCustomConfigurationFileList:(NSArray<NSString *> *)list;
///// 自定义模块配置文件当前列表
//+ (NSArray<QuotesCustomModel *> *)customConfigurationFileList;

@end

NS_ASSUME_NONNULL_END
