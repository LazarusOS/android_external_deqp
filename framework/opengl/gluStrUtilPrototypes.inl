/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 *
 * Generated from Khronos GL API description (gl.xml) revision 28861.
 */
const char*							getErrorName							(int value);
const char*							getTypeName								(int value);
const char*							getParamQueryName						(int value);
const char*							getProgramParamName						(int value);
const char*							getUniformParamName						(int value);
const char*							getFramebufferAttachmentName			(int value);
const char*							getFramebufferAttachmentParameterName	(int value);
const char*							getFramebufferTargetName				(int value);
const char*							getFramebufferStatusName				(int value);
const char*							getFramebufferAttachmentTypeName		(int value);
const char*							getFramebufferColorEncodingName			(int value);
const char*							getFramebufferParameterName				(int value);
const char*							getRenderbufferParameterName			(int value);
const char*							getPrimitiveTypeName					(int value);
const char*							getBlendFactorName						(int value);
const char*							getBlendEquationName					(int value);
const char*							getBufferTargetName						(int value);
const char*							getBufferBindingName					(int value);
const char*							getUsageName							(int value);
const char*							getBufferQueryName						(int value);
const char*							getFaceName								(int value);
const char*							getCompareFuncName						(int value);
const char*							getEnableCapName						(int value);
const char*							getWindingName							(int value);
const char*							getHintModeName							(int value);
const char*							getHintName								(int value);
const char*							getStencilOpName						(int value);
const char*							getShaderTypeName						(int value);
const char*							getBufferName							(int value);
const char*							getInvalidateAttachmentName				(int value);
const char*							getDrawReadBufferName					(int value);
const char*							getTextureTargetName					(int value);
const char*							getTextureParameterName					(int value);
const char*							getTextureLevelParameterName			(int value);
const char*							getRepeatModeName						(int value);
const char*							getTextureFilterName					(int value);
const char*							getTextureWrapModeName					(int value);
const char*							getTextureSwizzleName					(int value);
const char*							getTextureCompareModeName				(int value);
const char*							getCubeMapFaceName						(int value);
const char*							getPixelStoreParameterName				(int value);
const char*							getPixelFormatName						(int value);
const char*							getCompressedTexFormatName				(int value);
const char*							getShaderVarTypeName					(int value);
const char*							getShaderParamName						(int value);
const char*							getVertexAttribParameterNameName		(int value);
const char*							getBooleanName							(int value);
const char*							getGettableStateName					(int value);
const char*							getGettableIndexedStateName				(int value);
const char*							getGettableStringName					(int value);
const char*							getInternalFormatParameterName			(int value);
const char*							getInternalFormatTargetName				(int value);
const char*							getMultisampleParameterName				(int value);
const char*							getQueryTargetName						(int value);
const char*							getQueryParamName						(int value);
const char*							getQueryObjectParamName					(int value);
const char*							getImageAccessName						(int value);
const char*							getProgramInterfaceName					(int value);
const char*							getProgramResourcePropertyName			(int value);
const char*							getPrecisionFormatTypeName				(int value);
const char*							getTransformFeedbackTargetName			(int value);
const char*							getProvokingVertexName					(int value);
const char*							getDebugMessageSourceName				(int value);
const char*							getDebugMessageTypeName					(int value);
const char*							getDebugMessageSeverityName				(int value);
const char*							getPipelineParamName					(int value);
tcu::Format::Bitfield<16>			getBufferMaskStr						(int value);
tcu::Format::Bitfield<16>			getBufferMapFlagsStr					(int value);
tcu::Format::Bitfield<16>			getMemoryBarrierFlagsStr				(int value);
inline tcu::Format::Enum<int, 2>	getErrorStr								(int value)		{ return tcu::Format::Enum<int, 2>(getErrorName, value); }
inline tcu::Format::Enum<int, 2>	getTypeStr								(int value)		{ return tcu::Format::Enum<int, 2>(getTypeName, value); }
inline tcu::Format::Enum<int, 2>	getParamQueryStr						(int value)		{ return tcu::Format::Enum<int, 2>(getParamQueryName, value); }
inline tcu::Format::Enum<int, 2>	getProgramParamStr						(int value)		{ return tcu::Format::Enum<int, 2>(getProgramParamName, value); }
inline tcu::Format::Enum<int, 2>	getUniformParamStr						(int value)		{ return tcu::Format::Enum<int, 2>(getUniformParamName, value); }
inline tcu::Format::Enum<int, 2>	getFramebufferAttachmentStr				(int value)		{ return tcu::Format::Enum<int, 2>(getFramebufferAttachmentName, value); }
inline tcu::Format::Enum<int, 2>	getFramebufferAttachmentParameterStr	(int value)		{ return tcu::Format::Enum<int, 2>(getFramebufferAttachmentParameterName, value); }
inline tcu::Format::Enum<int, 2>	getFramebufferTargetStr					(int value)		{ return tcu::Format::Enum<int, 2>(getFramebufferTargetName, value); }
inline tcu::Format::Enum<int, 2>	getFramebufferStatusStr					(int value)		{ return tcu::Format::Enum<int, 2>(getFramebufferStatusName, value); }
inline tcu::Format::Enum<int, 2>	getFramebufferAttachmentTypeStr			(int value)		{ return tcu::Format::Enum<int, 2>(getFramebufferAttachmentTypeName, value); }
inline tcu::Format::Enum<int, 2>	getFramebufferColorEncodingStr			(int value)		{ return tcu::Format::Enum<int, 2>(getFramebufferColorEncodingName, value); }
inline tcu::Format::Enum<int, 2>	getFramebufferParameterStr				(int value)		{ return tcu::Format::Enum<int, 2>(getFramebufferParameterName, value); }
inline tcu::Format::Enum<int, 2>	getRenderbufferParameterStr				(int value)		{ return tcu::Format::Enum<int, 2>(getRenderbufferParameterName, value); }
inline tcu::Format::Enum<int, 2>	getPrimitiveTypeStr						(int value)		{ return tcu::Format::Enum<int, 2>(getPrimitiveTypeName, value); }
inline tcu::Format::Enum<int, 2>	getBlendFactorStr						(int value)		{ return tcu::Format::Enum<int, 2>(getBlendFactorName, value); }
inline tcu::Format::Enum<int, 2>	getBlendEquationStr						(int value)		{ return tcu::Format::Enum<int, 2>(getBlendEquationName, value); }
inline tcu::Format::Enum<int, 2>	getBufferTargetStr						(int value)		{ return tcu::Format::Enum<int, 2>(getBufferTargetName, value); }
inline tcu::Format::Enum<int, 2>	getBufferBindingStr						(int value)		{ return tcu::Format::Enum<int, 2>(getBufferBindingName, value); }
inline tcu::Format::Enum<int, 2>	getUsageStr								(int value)		{ return tcu::Format::Enum<int, 2>(getUsageName, value); }
inline tcu::Format::Enum<int, 2>	getBufferQueryStr						(int value)		{ return tcu::Format::Enum<int, 2>(getBufferQueryName, value); }
inline tcu::Format::Enum<int, 2>	getFaceStr								(int value)		{ return tcu::Format::Enum<int, 2>(getFaceName, value); }
inline tcu::Format::Enum<int, 2>	getCompareFuncStr						(int value)		{ return tcu::Format::Enum<int, 2>(getCompareFuncName, value); }
inline tcu::Format::Enum<int, 2>	getEnableCapStr							(int value)		{ return tcu::Format::Enum<int, 2>(getEnableCapName, value); }
inline tcu::Format::Enum<int, 2>	getWindingStr							(int value)		{ return tcu::Format::Enum<int, 2>(getWindingName, value); }
inline tcu::Format::Enum<int, 2>	getHintModeStr							(int value)		{ return tcu::Format::Enum<int, 2>(getHintModeName, value); }
inline tcu::Format::Enum<int, 2>	getHintStr								(int value)		{ return tcu::Format::Enum<int, 2>(getHintName, value); }
inline tcu::Format::Enum<int, 2>	getStencilOpStr							(int value)		{ return tcu::Format::Enum<int, 2>(getStencilOpName, value); }
inline tcu::Format::Enum<int, 2>	getShaderTypeStr						(int value)		{ return tcu::Format::Enum<int, 2>(getShaderTypeName, value); }
inline tcu::Format::Enum<int, 2>	getBufferStr							(int value)		{ return tcu::Format::Enum<int, 2>(getBufferName, value); }
inline tcu::Format::Enum<int, 2>	getInvalidateAttachmentStr				(int value)		{ return tcu::Format::Enum<int, 2>(getInvalidateAttachmentName, value); }
inline tcu::Format::Enum<int, 2>	getDrawReadBufferStr					(int value)		{ return tcu::Format::Enum<int, 2>(getDrawReadBufferName, value); }
inline tcu::Format::Enum<int, 2>	getTextureTargetStr						(int value)		{ return tcu::Format::Enum<int, 2>(getTextureTargetName, value); }
inline tcu::Format::Enum<int, 2>	getTextureParameterStr					(int value)		{ return tcu::Format::Enum<int, 2>(getTextureParameterName, value); }
inline tcu::Format::Enum<int, 2>	getTextureLevelParameterStr				(int value)		{ return tcu::Format::Enum<int, 2>(getTextureLevelParameterName, value); }
inline tcu::Format::Enum<int, 2>	getRepeatModeStr						(int value)		{ return tcu::Format::Enum<int, 2>(getRepeatModeName, value); }
inline tcu::Format::Enum<int, 2>	getTextureFilterStr						(int value)		{ return tcu::Format::Enum<int, 2>(getTextureFilterName, value); }
inline tcu::Format::Enum<int, 2>	getTextureWrapModeStr					(int value)		{ return tcu::Format::Enum<int, 2>(getTextureWrapModeName, value); }
inline tcu::Format::Enum<int, 2>	getTextureSwizzleStr					(int value)		{ return tcu::Format::Enum<int, 2>(getTextureSwizzleName, value); }
inline tcu::Format::Enum<int, 2>	getTextureCompareModeStr				(int value)		{ return tcu::Format::Enum<int, 2>(getTextureCompareModeName, value); }
inline tcu::Format::Enum<int, 2>	getCubeMapFaceStr						(int value)		{ return tcu::Format::Enum<int, 2>(getCubeMapFaceName, value); }
inline tcu::Format::Enum<int, 2>	getPixelStoreParameterStr				(int value)		{ return tcu::Format::Enum<int, 2>(getPixelStoreParameterName, value); }
inline tcu::Format::Enum<int, 2>	getPixelFormatStr						(int value)		{ return tcu::Format::Enum<int, 2>(getPixelFormatName, value); }
inline tcu::Format::Enum<int, 2>	getCompressedTexFormatStr				(int value)		{ return tcu::Format::Enum<int, 2>(getCompressedTexFormatName, value); }
inline tcu::Format::Enum<int, 2>	getShaderVarTypeStr						(int value)		{ return tcu::Format::Enum<int, 2>(getShaderVarTypeName, value); }
inline tcu::Format::Enum<int, 2>	getShaderParamStr						(int value)		{ return tcu::Format::Enum<int, 2>(getShaderParamName, value); }
inline tcu::Format::Enum<int, 2>	getVertexAttribParameterNameStr			(int value)		{ return tcu::Format::Enum<int, 2>(getVertexAttribParameterNameName, value); }
inline tcu::Format::Enum<int, 2>	getBooleanStr							(int value)		{ return tcu::Format::Enum<int, 2>(getBooleanName, value); }
inline tcu::Format::Enum<int, 2>	getGettableStateStr						(int value)		{ return tcu::Format::Enum<int, 2>(getGettableStateName, value); }
inline tcu::Format::Enum<int, 2>	getGettableIndexedStateStr				(int value)		{ return tcu::Format::Enum<int, 2>(getGettableIndexedStateName, value); }
inline tcu::Format::Enum<int, 2>	getGettableStringStr					(int value)		{ return tcu::Format::Enum<int, 2>(getGettableStringName, value); }
inline tcu::Format::Enum<int, 2>	getInternalFormatParameterStr			(int value)		{ return tcu::Format::Enum<int, 2>(getInternalFormatParameterName, value); }
inline tcu::Format::Enum<int, 2>	getInternalFormatTargetStr				(int value)		{ return tcu::Format::Enum<int, 2>(getInternalFormatTargetName, value); }
inline tcu::Format::Enum<int, 2>	getMultisampleParameterStr				(int value)		{ return tcu::Format::Enum<int, 2>(getMultisampleParameterName, value); }
inline tcu::Format::Enum<int, 2>	getQueryTargetStr						(int value)		{ return tcu::Format::Enum<int, 2>(getQueryTargetName, value); }
inline tcu::Format::Enum<int, 2>	getQueryParamStr						(int value)		{ return tcu::Format::Enum<int, 2>(getQueryParamName, value); }
inline tcu::Format::Enum<int, 2>	getQueryObjectParamStr					(int value)		{ return tcu::Format::Enum<int, 2>(getQueryObjectParamName, value); }
inline tcu::Format::Enum<int, 2>	getImageAccessStr						(int value)		{ return tcu::Format::Enum<int, 2>(getImageAccessName, value); }
inline tcu::Format::Enum<int, 2>	getProgramInterfaceStr					(int value)		{ return tcu::Format::Enum<int, 2>(getProgramInterfaceName, value); }
inline tcu::Format::Enum<int, 2>	getProgramResourcePropertyStr			(int value)		{ return tcu::Format::Enum<int, 2>(getProgramResourcePropertyName, value); }
inline tcu::Format::Enum<int, 2>	getPrecisionFormatTypeStr				(int value)		{ return tcu::Format::Enum<int, 2>(getPrecisionFormatTypeName, value); }
inline tcu::Format::Enum<int, 2>	getTransformFeedbackTargetStr			(int value)		{ return tcu::Format::Enum<int, 2>(getTransformFeedbackTargetName, value); }
inline tcu::Format::Enum<int, 2>	getProvokingVertexStr					(int value)		{ return tcu::Format::Enum<int, 2>(getProvokingVertexName, value); }
inline tcu::Format::Enum<int, 2>	getDebugMessageSourceStr				(int value)		{ return tcu::Format::Enum<int, 2>(getDebugMessageSourceName, value); }
inline tcu::Format::Enum<int, 2>	getDebugMessageTypeStr					(int value)		{ return tcu::Format::Enum<int, 2>(getDebugMessageTypeName, value); }
inline tcu::Format::Enum<int, 2>	getDebugMessageSeverityStr				(int value)		{ return tcu::Format::Enum<int, 2>(getDebugMessageSeverityName, value); }
inline tcu::Format::Enum<int, 2>	getPipelineParamStr						(int value)		{ return tcu::Format::Enum<int, 2>(getPipelineParamName, value); }
inline tcu::Format::Enum<int, 1>	getBooleanStr							(deUint8 value)	{ return tcu::Format::Enum<int, 1>(getBooleanName, (int)value); }
