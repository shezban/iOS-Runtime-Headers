/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DTexCoordGeneration, TSCH3Dvec3DataBuffer;

@interface TSCH3DChartTexcoordSharedResource : TSCH3DChartMeshSharedResource {
    TSCH3DTexCoordGeneration *mGenerator;
    TSCH3Dvec3DataBuffer *mNormal;
    TSCH3Dvec3DataBuffer *mVertex;
}

@property(retain) TSCH3DTexCoordGeneration * generator;
@property(retain) TSCH3Dvec3DataBuffer * normal;
@property(retain) TSCH3Dvec3DataBuffer * vertex;

- (void)dealloc;
- (void)flushMemory;
- (id)generator;
- (id)get;
- (id)normal;
- (void)setChildRegenerated:(BOOL)arg1;
- (void)setGenerator:(id)arg1;
- (void)setNormal:(id)arg1;
- (void)setVertex:(id)arg1 normal:(id)arg2 generator:(id)arg3;
- (void)setVertex:(id)arg1;
- (id)vertex;

@end