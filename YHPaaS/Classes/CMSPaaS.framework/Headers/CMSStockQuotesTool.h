//
//  CMSStockQuotesTool.h
//  CMSPaaS
//
//  Created by symbio on 2021/2/2.
//

#import <Foundation/Foundation.h>
#import "CMSQuotesPageModel.h"
#import "CMSStock.h"
#import "CMSAHPremiumStock.h"
NS_ASSUME_NONNULL_BEGIN

extern NSString *const kCMSQuotesConfigKeyDisplayText;
extern NSString *const kCMSQuotesConfigKeyTextColor;

@interface CMSStockQuotesTool : NSObject
/// 获取该文件的最后修改时间
+ (NSInteger)getLocalQuotesSelectTypeListLastChangeTime;
/// 移除行情配置缓存
+ (BOOL)removeQuotesConfig;
/// 获取当前行情选中标签列表,优先取本地,取不到取默认,若默认方法未实现,则返回全部
+ (NSArray<CMSQuotesPageModel *> *)getQuotesSelectTypeListWithPageList:(NSArray<CMSQuotesPageModel *> *)pageList;
/// 更新行情选中指数列表
+ (BOOL)updateQuotesSelectTypeList:(NSArray<CMSQuotesPageModel *> *)typeList;

+ (NSString *)displayTextForValueType:(NSString *)valueType value:(NSObject *)value unit:(NSString *)unit;
+ (NSString *)textColorForColorType:(NSString *)colorType stockQuotes:(id)stockQuotes value:(NSObject *)value;
/// 获取行情选中指数列表
+ (NSArray<id<CMSStockProtocol>> *)getQuotesSelectIndexList;
/// 更新行情选中指数列表
+ (BOOL)updateQuotesSelectIndexList:(NSArray<id<CMSStockProtocol>> *)indexList;

/// 获取stock属性的相应显示数据. 返回的info[@"displayText"]:为最终显示的值, info[@"textColor"]:为应该显示的颜色, 其余的属性保留要用自取
/// @param stockProperty 属性名字
/// @param stock 股票模型
+ (NSDictionary *)showInfoOfStockProperty:(NSString *)stockProperty inStock:(id<CMSStockProtocol>)stock;
+ (NSDictionary *)showAHInfoOfStockProperty:(NSString *)stockProperty inStock:(CMSAHPremiumStock *)stock;

/// 处理数据转换
+ (NSString *)handleBigNumberForNumber:(NSNumber *)number;
///处理数据成相应格式文字
+ (NSString *)displayTextForNumber:(NSNumber *)number
                   handleBigNumber:(BOOL)handleBigNumber
                          showPlus:(BOOL)showPlus
                            decNum:(int)decNum
                              unit:(NSString *)unit;
/// 处理文字颜色
+ (NSString *)textColorForNumber:(NSNumber *)number compareNumber:(NSNumber *)compareNumber;
@end

NS_ASSUME_NONNULL_END


