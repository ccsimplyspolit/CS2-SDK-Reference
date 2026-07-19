#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CRenderSkeleton.hpp"
#include "source2sdk/modellib/CSceneObjectData.hpp"
#include "source2sdk/modellib/DynamicMeshDeformParams_t.hpp"
namespace source2sdk
{
    namespace modellib
    {
        struct CBaseConstraint;
    };
};
namespace source2sdk
{
    namespace modellib
    {
        struct CRenderGroom;
    };
};

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x228
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRenderMesh
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // m_sceneObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::modellib::CSceneObjectData,1> m_sceneObjects;
            char m_sceneObjects[0xc0]; // 0x10            
            // m_constraints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::modellib::CBaseConstraint*> m_constraints;
            char m_constraints[0x10]; // 0xd0            
            source2sdk::modellib::CRenderSkeleton m_skeleton; // 0xe0            
            uint8_t _pad0130[0xbc]; // 0x130
            bool m_bUseUV2ForCharting; // 0x1ec            
            bool m_bEmbeddedMapMesh; // 0x1ed            
            uint8_t _pad01ee[0x22]; // 0x1ee
            source2sdk::modellib::DynamicMeshDeformParams_t m_meshDeformParams; // 0x210            
            uint8_t _pad021c[0x4]; // 0x21c
            source2sdk::modellib::CRenderGroom* m_pGroomData; // 0x220            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_sceneObjects) == 0x10);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_constraints) == 0xd0);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_skeleton) == 0xe0);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_bUseUV2ForCharting) == 0x1ec);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_bEmbeddedMapMesh) == 0x1ed);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_meshDeformParams) == 0x210);
        static_assert(offsetof(source2sdk::modellib::CRenderMesh, m_pGroomData) == 0x220);
        
        static_assert(sizeof(source2sdk::modellib::CRenderMesh) == 0x228);
    };
};
