#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7c8
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CRopeKeyframe : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad0770[0x8]; // 0x770
            std::uint16_t m_RopeFlags; // 0x778            
            uint8_t _pad077a[0x6]; // 0x77a
            CUtlSymbolLarge m_iNextLinkName; // 0x780            
            std::int16_t m_Slack; // 0x788            
            uint8_t _pad078a[0x2]; // 0x78a
            float m_Width; // 0x78c            
            float m_TextureScale; // 0x790            
            std::uint8_t m_nSegments; // 0x794            
            bool m_bConstrainBetweenEndpoints; // 0x795            
            uint8_t _pad0796[0x2]; // 0x796
            CUtlSymbolLarge m_strRopeMaterialModel; // 0x798            
            // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
            char m_iRopeMaterialModelIndex[0x8]; // 0x7a0            
            std::uint8_t m_Subdiv; // 0x7a8            
            // metadata: MNotSaved
            std::uint8_t m_nChangeCount; // 0x7a9            
            std::int16_t m_RopeLength; // 0x7aa            
            std::uint8_t m_fLockedPoints; // 0x7ac            
            bool m_bCreatedFromMapFile; // 0x7ad            
            uint8_t _pad07ae[0x2]; // 0x7ae
            float m_flScrollSpeed; // 0x7b0            
            bool m_bStartPointValid; // 0x7b4            
            bool m_bEndPointValid; // 0x7b5            
            uint8_t _pad07b6[0x2]; // 0x7b6
            // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hStartPoint;
            char m_hStartPoint[0x4]; // 0x7b8            
            // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEndPoint;
            char m_hEndPoint[0x4]; // 0x7bc            
            source2sdk::modellib::AttachmentHandle_t m_iStartAttachment; // 0x7c0            
            source2sdk::modellib::AttachmentHandle_t m_iEndAttachment; // 0x7c1            
            uint8_t _pad07c2[0x6];
            
            // Datamap fields:
            // float InputSetScrollSpeed; // 0x0
            // Vector InputSetForce; // 0x0
            // void InputBreak; // 0x0
            // int32_t Breakable; // 0x7fffffff
            // int32_t Collide; // 0x7fffffff
            // int32_t Barbed; // 0x7fffffff
            // int32_t UseWind; // 0x7fffffff
            // int32_t Dangling; // 0x7fffffff
            // int32_t Type; // 0x7fffffff
            // int32_t RopeShader; // 0x7fffffff
            // CUtlString RopeMaterial; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRopeKeyframe because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRopeKeyframe) == 0x7c8);
    };
};
