#import "ZXParsedResult.h"

/**
 * @author Sean Owen
 */

@interface ZXTelParsedResult : ZXParsedResult {
  NSString * number;
  NSString * telURI;
  NSString * title;
}

@property(nonatomic, retain, readonly) NSString * number;
@property(nonatomic, retain, readonly) NSString * telURI;
@property(nonatomic, retain, readonly) NSString * title;
@property(nonatomic, retain, readonly) NSString * displayResult;

- (id) initWithNumber:(NSString *)number telURI:(NSString *)telURI title:(NSString *)title;

@end