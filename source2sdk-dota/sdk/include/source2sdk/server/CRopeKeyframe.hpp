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
        // Size: 0x7d0
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CRopeKeyframe : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad0778[0x8]; // 0x778
            std::uint16_t m_RopeFlags; // 0x780            
            uint8_t _pad0782[0x6]; // 0x782
            CUtlSymbolLarge m_iNextLinkName; // 0x788            
            std::int16_t m_Slack; // 0x790            
            uint8_t _pad0792[0x2]; // 0x792
            float m_Width; // 0x794            
            float m_TextureScale; // 0x798            
            std::uint8_t m_nSegments; // 0x79c            
            bool m_bConstrainBetweenEndpoints; // 0x79d            
            uint8_t _pad079e[0x2]; // 0x79e
            CUtlSymbolLarge m_strRopeMaterialModel; // 0x7a0            
            // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
            char m_iRopeMaterialModelIndex[0x8]; // 0x7a8            
            std::uint8_t m_Subdiv; // 0x7b0            
            // metadata: MNotSaved
            std::uint8_t m_nChangeCount; // 0x7b1            
            std::int16_t m_RopeLength; // 0x7b2            
            std::uint8_t m_fLockedPoints; // 0x7b4            
            bool m_bCreatedFromMapFile; // 0x7b5            
            uint8_t _pad07b6[0x2]; // 0x7b6
            float m_flScrollSpeed; // 0x7b8            
            bool m_bStartPointValid; // 0x7bc            
            bool m_bEndPointValid; // 0x7bd            
            uint8_t _pad07be[0x2]; // 0x7be
            // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hStartPoint;
            char m_hStartPoint[0x4]; // 0x7c0            
            // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEndPoint;
            char m_hEndPoint[0x4]; // 0x7c4            
            source2sdk::modellib::AttachmentHandle_t m_iStartAttachment; // 0x7c8            
            source2sdk::modellib::AttachmentHandle_t m_iEndAttachment; // 0x7c9            
            uint8_t _pad07ca[0x6];
            
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
        
        static_assert(sizeof(source2sdk::server::CRopeKeyframe) == 0x7d0);
    };
};
