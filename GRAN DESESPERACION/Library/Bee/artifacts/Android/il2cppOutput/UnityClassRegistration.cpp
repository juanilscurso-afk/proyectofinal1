extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_AndroidJNI();
	RegisterModule_AndroidJNI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_AssetBundle();
	RegisterModule_AssetBundle();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_GraphicsStateCollectionSerializer();
	RegisterModule_GraphicsStateCollectionSerializer();

	void RegisterModule_HierarchyCore();
	RegisterModule_HierarchyCore();

	void RegisterModule_HotReload();
	RegisterModule_HotReload();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_InputForUI();
	RegisterModule_InputForUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Properties();
	RegisterModule_Properties();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_UnityAnalyticsCommon();
	RegisterModule_UnityAnalyticsCommon();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_VFX();
	RegisterModule_VFX();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshData; template <> void RegisterUnityClass<NavMeshData>(const char*);
class NavMeshObstacle; template <> void RegisterUnityClass<NavMeshObstacle>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class IConstraint; template <> void RegisterUnityClass<IConstraint>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class PositionConstraint; template <> void RegisterUnityClass<PositionConstraint>(const char*);
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AssetBundle; template <> void RegisterUnityClass<AssetBundle>(const char*);
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioMixerSnapshot; template <> void RegisterUnityClass<AudioMixerSnapshot>(const char*);
class AudioResource; template <> void RegisterUnityClass<AudioResource>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class LODGroup; template <> void RegisterUnityClass<LODGroup>(const char*);
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeProxyVolume; template <> void RegisterUnityClass<LightProbeProxyVolume>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class Material; template <> void RegisterUnityClass<Material>(const char*);
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class Object; template <> void RegisterUnityClass<Object>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class RayTracingShader; template <> void RegisterUnityClass<RayTracingShader>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; template <> void RegisterUnityClass<SortingGroup>(const char*);
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
namespace Unity { class ConfigurableJoint; } template <> void RegisterUnityClass<Unity::ConfigurableJoint>(const char*);
namespace Unity { class FixedJoint; } template <> void RegisterUnityClass<Unity::FixedJoint>(const char*);
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PhysicsMaterial; template <> void RegisterUnityClass<PhysicsMaterial>(const char*);
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class UIRenderer; template <> void RegisterUnityClass<UIRenderer>(const char*);
class VFXManager; template <> void RegisterUnityClass<VFXManager>(const char*);
class VFXRenderer; template <> void RegisterUnityClass<VFXRenderer>(const char*);
class VisualEffect; template <> void RegisterUnityClass<VisualEffect>(const char*);
class VisualEffectAsset; template <> void RegisterUnityClass<VisualEffectAsset>(const char*);
class VisualEffectObject; template <> void RegisterUnityClass<VisualEffectObject>(const char*);
class VideoClip; template <> void RegisterUnityClass<VideoClip>(const char*);
class VideoPlayer; template <> void RegisterUnityClass<VideoPlayer>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 114 non stripped classes
	//0. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//1. NavMeshData
	RegisterUnityClass<NavMeshData>("AI");
	//2. NavMeshObstacle
	RegisterUnityClass<NavMeshObstacle>("AI");
	//3. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//4. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//5. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//6. Animator
	RegisterUnityClass<Animator>("Animation");
	//7. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//8. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//9. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//10. IConstraint
	RegisterUnityClass<IConstraint>("Animation");
	//11. Motion
	RegisterUnityClass<Motion>("Animation");
	//12. PositionConstraint
	RegisterUnityClass<PositionConstraint>("Animation");
	//13. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//14. AssetBundle
	RegisterUnityClass<AssetBundle>("AssetBundle");
	//15. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//16. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//17. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//18. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//19. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//20. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//21. AudioMixerSnapshot
	RegisterUnityClass<AudioMixerSnapshot>("Audio");
	//22. AudioResource
	RegisterUnityClass<AudioResource>("Audio");
	//23. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//24. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//25. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//26. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//27. Camera
	RegisterUnityClass<Camera>("Core");
	//28. Component
	RegisterUnityClass<Unity::Component>("Core");
	//29. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//30. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//31. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//32. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//33. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//34. GameManager
	RegisterUnityClass<GameManager>("Core");
	//35. GameObject
	RegisterUnityClass<GameObject>("Core");
	//36. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//37. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//38. InputManager
	RegisterUnityClass<InputManager>("Core");
	//39. LODGroup
	RegisterUnityClass<LODGroup>("Core");
	//40. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//41. Light
	RegisterUnityClass<Light>("Core");
	//42. LightProbeProxyVolume
	RegisterUnityClass<LightProbeProxyVolume>("Core");
	//43. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//44. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//45. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//46. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//47. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//48. Material
	RegisterUnityClass<Material>("Core");
	//49. Mesh
	RegisterUnityClass<Mesh>("Core");
	//50. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//51. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//52. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//53. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//54. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//55. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//56. Object
	//Skipping Object
	//57. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//58. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//59. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//60. RayTracingShader
	RegisterUnityClass<RayTracingShader>("Core");
	//61. RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//62. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//63. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//64. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//65. Renderer
	RegisterUnityClass<Renderer>("Core");
	//66. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//67. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//68. Shader
	RegisterUnityClass<Shader>("Core");
	//69. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//70. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//71. Skybox
	RegisterUnityClass<Skybox>("Core");
	//72. SortingGroup
	RegisterUnityClass<SortingGroup>("Core");
	//73. Sprite
	RegisterUnityClass<Sprite>("Core");
	//74. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//75. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//76. TagManager
	RegisterUnityClass<TagManager>("Core");
	//77. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//78. Texture
	RegisterUnityClass<Texture>("Core");
	//79. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//80. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//81. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//82. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//83. Transform
	RegisterUnityClass<Transform>("Core");
	//84. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//85. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//86. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//87. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//88. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//89. Collider
	RegisterUnityClass<Collider>("Physics");
	//90. ConfigurableJoint
	RegisterUnityClass<Unity::ConfigurableJoint>("Physics");
	//91. FixedJoint
	RegisterUnityClass<Unity::FixedJoint>("Physics");
	//92. Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//93. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//94. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//95. PhysicsMaterial
	RegisterUnityClass<PhysicsMaterial>("Physics");
	//96. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//97. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//98. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//99. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//100. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//101. Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//102. TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//103. Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//104. CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//105. CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//106. UIRenderer
	RegisterUnityClass<UIRenderer>("UIElements");
	//107. VFXManager
	RegisterUnityClass<VFXManager>("VFX");
	//108. VFXRenderer
	RegisterUnityClass<VFXRenderer>("VFX");
	//109. VisualEffect
	RegisterUnityClass<VisualEffect>("VFX");
	//110. VisualEffectAsset
	RegisterUnityClass<VisualEffectAsset>("VFX");
	//111. VisualEffectObject
	RegisterUnityClass<VisualEffectObject>("VFX");
	//112. VideoClip
	RegisterUnityClass<VideoClip>("Video");
	//113. VideoPlayer
	RegisterUnityClass<VideoPlayer>("Video");

}
